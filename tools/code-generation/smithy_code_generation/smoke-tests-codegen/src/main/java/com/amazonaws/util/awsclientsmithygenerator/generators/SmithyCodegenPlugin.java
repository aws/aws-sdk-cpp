package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.transform.ModelTransformer;

import freemarker.template.Configuration;
import freemarker.template.Template;
import freemarker.template.TemplateException;
import freemarker.cache.FileTemplateLoader;
import java.util.Map;
import java.util.HashMap;
import java.io.*;
import java.util.List;
public class SmithyCodegenPlugin implements SmithyBuildPlugin {

@Override
public String getName() {
    System.out.println("getName called");
    return "cpp-codegen-smoke-tests-plugin"; // Return the name of your plugin
}



@Override
    public void execute(PluginContext context){
        
        System.out.println(String.format("Executing SmithyCodegenPlugin...", context.getFileManifest().getBaseDir().toString()));

        SmokeTestsParser smoketestParser = new SmokeTestsParser(context);
        
        smoketestParser.run();

        //Map<String, List<TestcaseParams> > smoketests =  smoketestParser.extractServiceSmokeTests();
//
        //smoketests.entrySet().stream().forEach(entry -> {
        //        List<TestcaseParams> tests = entry.getValue();
        //        CppSmokeTestsWriter writer = new CppSmokeTestsWriter("");
        //        String code = writer.GetSmokeTestsCode(tests);
        //        System.out.println("Code:\n"+code);
        //    }
        //);


        /*CppBlockWriter blockWriter = new CppBlockWriter( String.format("void newFunction()"),0).
        addCode("vector<int> test =").
        openCodeBlock("").
        addCode("1,2,3").
        closeCodeBlock().
        addCode("return test").
        closeCodeBlock();
        System.out.println(blockWriter.getCode());
        */
        
        /*
        Configuration cfg = new Configuration();

        try{
            System.out.println(SmithyCodegenPlugin.class.getClassLoader());
            cfg.setClassLoaderForTemplateLoading(
                SmithyCodegenPlugin.class.getClassLoader(), "templates");
        
            
            // Prepare data for the template (context)
            Map<String, Object> ctx = new HashMap<>();
            Map<String, Object> user = new HashMap<>();
            user.put("name", "John Doe");
            user.put("age", 30);
            ctx.put("user", user);
            Writer out = new OutputStreamWriter(System.out);
            Template template = cfg.getTemplate("smokeTestSource.ftl");

            template.process(ctx, out);
            out.flush();
        }
        catch(Exception e){
            System.out.println(e.toString());
        }
        */
        

        /* 
        try{
            SmithyParser parser = new SmithyParser(context.getModel(), context.getSources());
            parser.GenerateSmokeTests();
            //Optional<ObjectNode> settings = context.getSettings().asObjectNode();
            

        }
        catch(Exception e){
            System.out.println(e.toString());
        }
            */
        


        //try{
        //    SmithyParser2 parser = new SmithyParser2(context.getModel(), context.getSources());
        //    parser.GenerateSmokeTests();
        //}
        //catch(Exception e){
        //    System.out.println(e.toString());
        //}
    }
}