package com.amazonaws.util.awsclientsmithygenerator.CliOptions;

import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.DefaultParser;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.apache.commons.cli.ParseException;

import java.util.Arrays;

public class CliOptions {
    private static final Option SerivceNameOption = Option.builder()
            .option("s")
            .longOpt("serviceName")
            .hasArg(true)
            .required(true)
            .desc("Service Name to be generated as String")
            .build();

    public static CliOptions BuildFromInput(String[] args) throws ParseException {
        final Options options = new Options();
        options.addOption(SerivceNameOption);
        final CommandLineParser parser = new DefaultParser();
        final CommandLine parsed = parser.parse(options, args);
        return new CliOptions(parsed);
    }

    private final CommandLine commandLine;

    private CliOptions(CommandLine commandLine) {
        this.commandLine = commandLine;
    }

    public String GetServiceName() throws ParseException {
        return this.commandLine.getOptionValue(SerivceNameOption);
    }

    public void PrintHelp() {
        System.out.println("Could Not Find required args:");
        Arrays.stream(this.commandLine.getOptions())
                .forEach(System.out::println);
    }
}
