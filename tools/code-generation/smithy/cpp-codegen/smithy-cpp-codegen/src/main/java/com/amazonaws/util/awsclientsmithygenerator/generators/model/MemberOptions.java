/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

/**
 * Options for {@link MemberRenderer#render}. Replaces the family of positional-boolean
 * overloads so new rendering axes are added as a field here rather than as another overload.
 */
public final class MemberOptions {
    private String exportMacro;
    private String className;
    private boolean emitHasBeenSet = true;
    private String exclude = null;
    private boolean wideIntegers = false;

    public MemberOptions exportMacro(String v) { this.exportMacro = v; return this; }
    public MemberOptions className(String v) { this.className = v; return this; }
    public MemberOptions emitHasBeenSet(boolean v) { this.emitHasBeenSet = v; return this; }
    public MemberOptions exclude(String v) { this.exclude = v; return this; }
    public MemberOptions wideIntegers(boolean v) { this.wideIntegers = v; return this; }

    public String exportMacro() { return exportMacro; }
    public String className() { return className; }
    public boolean emitHasBeenSet() { return emitHasBeenSet; }
    public String exclude() { return exclude; }
    public boolean wideIntegers() { return wideIntegers; }
}
