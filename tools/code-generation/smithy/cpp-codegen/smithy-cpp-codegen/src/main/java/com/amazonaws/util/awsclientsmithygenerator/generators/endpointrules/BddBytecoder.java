/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.endpointrules;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

/**
 * Shells out to the in-tree {@code bdd-bytecoder.py} compiler to turn the JSON form of a
 * {@code smithy.rules#endpointBdd} trait into the binary BDD bytecode blob consumed by the
 * CRT {@code BddEngine}. The bytecoder path and python executable are supplied by the caller
 * (threaded in from {@code smithy_cpp_gen.py} as gradle properties) because the gradle working
 * directory cannot reach the compiler under {@code crt/} on its own.
 */
public final class BddBytecoder {

    private BddBytecoder() {}

    /**
     * @param pythonExecutable python interpreter to run (e.g. "python3").
     * @param bytecoderPath    absolute path to bdd-bytecoder.py.
     * @param traitJson        the endpointBdd trait serialized as JSON (the compiler's input).
     * @param serviceLabel     used only to label temp files / error messages.
     * @return the compiled binary bytecode.
     */
    public static byte[] compile(String pythonExecutable, String bytecoderPath, String traitJson, String serviceLabel) {
        String tempPrefix = "bdd-" + serviceLabel.replaceAll("[^a-zA-Z0-9._-]", "_") + "-";
        try (TempFile input = new TempFile(tempPrefix, ".json");
             TempFile output = new TempFile(tempPrefix, ".bin")) {
            Files.writeString(input.path, traitJson, StandardCharsets.UTF_8);

            Process process = new ProcessBuilder(
                    pythonExecutable, bytecoderPath, input.path.toString(), output.path.toString())
                .redirectErrorStream(true)
                .start();
            String consoleOutput = new String(process.getInputStream().readAllBytes(), StandardCharsets.UTF_8);
            int exitCode = process.waitFor();
            if (exitCode != 0) {
                throw new RuntimeException("bdd-bytecoder.py failed for '" + serviceLabel
                    + "' (exit " + exitCode + "):\n" + consoleOutput);
            }
            byte[] bytecode = Files.readAllBytes(output.path);
            if (bytecode.length == 0) {
                throw new RuntimeException("bdd-bytecoder.py produced an empty blob for '" + serviceLabel + "'");
            }
            return bytecode;
        } catch (IOException | InterruptedException e) {
            throw new RuntimeException("Failed to run bdd-bytecoder.py for '" + serviceLabel + "'", e);
        }
    }

    /** A temp file that deletes itself on close, so {@link #compile} can lean on try-with-resources. */
    private static final class TempFile implements AutoCloseable {
        private final Path path;

        TempFile(String prefix, String suffix) throws IOException {
            this.path = Files.createTempFile(prefix, suffix);
        }

        @Override
        public void close() throws IOException {
            Files.deleteIfExists(path);
        }
    }
}
