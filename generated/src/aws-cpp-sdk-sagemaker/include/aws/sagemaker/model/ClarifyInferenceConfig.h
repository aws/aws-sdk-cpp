/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClarifyFeatureType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The inference configuration parameter for the model container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyInferenceConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyInferenceConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyInferenceConfig();
    AWS_SAGEMAKER_API ClarifyInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline const Aws::String& GetFeaturesAttribute() const{ return m_featuresAttribute; }

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline bool FeaturesAttributeHasBeenSet() const { return m_featuresAttributeHasBeenSet; }

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline void SetFeaturesAttribute(const Aws::String& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = value; }

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline void SetFeaturesAttribute(Aws::String&& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = std::move(value); }

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline void SetFeaturesAttribute(const char* value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute.assign(value); }

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithFeaturesAttribute(const Aws::String& value) { SetFeaturesAttribute(value); return *this;}

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithFeaturesAttribute(Aws::String&& value) { SetFeaturesAttribute(std::move(value)); return *this;}

    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithFeaturesAttribute(const char* value) { SetFeaturesAttribute(value); return *this;}


    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline const Aws::String& GetContentTemplate() const{ return m_contentTemplate; }

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline bool ContentTemplateHasBeenSet() const { return m_contentTemplateHasBeenSet; }

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline void SetContentTemplate(const Aws::String& value) { m_contentTemplateHasBeenSet = true; m_contentTemplate = value; }

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline void SetContentTemplate(Aws::String&& value) { m_contentTemplateHasBeenSet = true; m_contentTemplate = std::move(value); }

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline void SetContentTemplate(const char* value) { m_contentTemplateHasBeenSet = true; m_contentTemplate.assign(value); }

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline ClarifyInferenceConfig& WithContentTemplate(const Aws::String& value) { SetContentTemplate(value); return *this;}

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline ClarifyInferenceConfig& WithContentTemplate(Aws::String&& value) { SetContentTemplate(std::move(value)); return *this;}

    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline ClarifyInferenceConfig& WithContentTemplate(const char* value) { SetContentTemplate(value); return *this;}


    /**
     * <p>The maximum number of records in a request that the model container can
     * process when querying the model container for the predictions of a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-synthetic">synthetic
     * dataset</a>. A record is a unit of input data that inference can be made on, for
     * example, a single line in CSV data. If <code>MaxRecordCount</code> is
     * <code>1</code>, the model container expects one record per request. A value of 2
     * or greater means that the model expects batch requests, which can reduce
     * overhead and speed up the inferencing process. If this parameter is not
     * provided, the explainer will tune the record count per request according to the
     * model container's capacity at runtime.</p>
     */
    inline int GetMaxRecordCount() const{ return m_maxRecordCount; }

    /**
     * <p>The maximum number of records in a request that the model container can
     * process when querying the model container for the predictions of a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-synthetic">synthetic
     * dataset</a>. A record is a unit of input data that inference can be made on, for
     * example, a single line in CSV data. If <code>MaxRecordCount</code> is
     * <code>1</code>, the model container expects one record per request. A value of 2
     * or greater means that the model expects batch requests, which can reduce
     * overhead and speed up the inferencing process. If this parameter is not
     * provided, the explainer will tune the record count per request according to the
     * model container's capacity at runtime.</p>
     */
    inline bool MaxRecordCountHasBeenSet() const { return m_maxRecordCountHasBeenSet; }

    /**
     * <p>The maximum number of records in a request that the model container can
     * process when querying the model container for the predictions of a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-synthetic">synthetic
     * dataset</a>. A record is a unit of input data that inference can be made on, for
     * example, a single line in CSV data. If <code>MaxRecordCount</code> is
     * <code>1</code>, the model container expects one record per request. A value of 2
     * or greater means that the model expects batch requests, which can reduce
     * overhead and speed up the inferencing process. If this parameter is not
     * provided, the explainer will tune the record count per request according to the
     * model container's capacity at runtime.</p>
     */
    inline void SetMaxRecordCount(int value) { m_maxRecordCountHasBeenSet = true; m_maxRecordCount = value; }

    /**
     * <p>The maximum number of records in a request that the model container can
     * process when querying the model container for the predictions of a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-synthetic">synthetic
     * dataset</a>. A record is a unit of input data that inference can be made on, for
     * example, a single line in CSV data. If <code>MaxRecordCount</code> is
     * <code>1</code>, the model container expects one record per request. A value of 2
     * or greater means that the model expects batch requests, which can reduce
     * overhead and speed up the inferencing process. If this parameter is not
     * provided, the explainer will tune the record count per request according to the
     * model container's capacity at runtime.</p>
     */
    inline ClarifyInferenceConfig& WithMaxRecordCount(int value) { SetMaxRecordCount(value); return *this;}


    /**
     * <p>The maximum payload size (MB) allowed of a request from the explainer to the
     * model container. Defaults to <code>6</code> MB.</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }

    /**
     * <p>The maximum payload size (MB) allowed of a request from the explainer to the
     * model container. Defaults to <code>6</code> MB.</p>
     */
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }

    /**
     * <p>The maximum payload size (MB) allowed of a request from the explainer to the
     * model container. Defaults to <code>6</code> MB.</p>
     */
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }

    /**
     * <p>The maximum payload size (MB) allowed of a request from the explainer to the
     * model container. Defaults to <code>6</code> MB.</p>
     */
    inline ClarifyInferenceConfig& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}


    /**
     * <p>A zero-based index used to extract a probability value (score) or list from
     * model container output in CSV format. If this value is not provided, the entire
     * model container output will be treated as a probability value (score) or
     * list.</p> <p> <b>Example for a single class model:</b> If the model container
     * output consists of a string-formatted prediction label followed by its
     * probability: <code>'1,0.6'</code>, set <code>ProbabilityIndex</code> to
     * <code>1</code> to select the probability value <code>0.6</code>.</p> <p>
     * <b>Example for a multiclass model:</b> If the model container output consists of
     * a string-formatted prediction label followed by its probability:
     * <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>ProbabilityIndex</code> to <code>1</code> to select the probability values
     * <code>[0.1,0.6,0.3]</code>.</p>
     */
    inline int GetProbabilityIndex() const{ return m_probabilityIndex; }

    /**
     * <p>A zero-based index used to extract a probability value (score) or list from
     * model container output in CSV format. If this value is not provided, the entire
     * model container output will be treated as a probability value (score) or
     * list.</p> <p> <b>Example for a single class model:</b> If the model container
     * output consists of a string-formatted prediction label followed by its
     * probability: <code>'1,0.6'</code>, set <code>ProbabilityIndex</code> to
     * <code>1</code> to select the probability value <code>0.6</code>.</p> <p>
     * <b>Example for a multiclass model:</b> If the model container output consists of
     * a string-formatted prediction label followed by its probability:
     * <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>ProbabilityIndex</code> to <code>1</code> to select the probability values
     * <code>[0.1,0.6,0.3]</code>.</p>
     */
    inline bool ProbabilityIndexHasBeenSet() const { return m_probabilityIndexHasBeenSet; }

    /**
     * <p>A zero-based index used to extract a probability value (score) or list from
     * model container output in CSV format. If this value is not provided, the entire
     * model container output will be treated as a probability value (score) or
     * list.</p> <p> <b>Example for a single class model:</b> If the model container
     * output consists of a string-formatted prediction label followed by its
     * probability: <code>'1,0.6'</code>, set <code>ProbabilityIndex</code> to
     * <code>1</code> to select the probability value <code>0.6</code>.</p> <p>
     * <b>Example for a multiclass model:</b> If the model container output consists of
     * a string-formatted prediction label followed by its probability:
     * <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>ProbabilityIndex</code> to <code>1</code> to select the probability values
     * <code>[0.1,0.6,0.3]</code>.</p>
     */
    inline void SetProbabilityIndex(int value) { m_probabilityIndexHasBeenSet = true; m_probabilityIndex = value; }

    /**
     * <p>A zero-based index used to extract a probability value (score) or list from
     * model container output in CSV format. If this value is not provided, the entire
     * model container output will be treated as a probability value (score) or
     * list.</p> <p> <b>Example for a single class model:</b> If the model container
     * output consists of a string-formatted prediction label followed by its
     * probability: <code>'1,0.6'</code>, set <code>ProbabilityIndex</code> to
     * <code>1</code> to select the probability value <code>0.6</code>.</p> <p>
     * <b>Example for a multiclass model:</b> If the model container output consists of
     * a string-formatted prediction label followed by its probability:
     * <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>ProbabilityIndex</code> to <code>1</code> to select the probability values
     * <code>[0.1,0.6,0.3]</code>.</p>
     */
    inline ClarifyInferenceConfig& WithProbabilityIndex(int value) { SetProbabilityIndex(value); return *this;}


    /**
     * <p>A zero-based index used to extract a label header or list of label headers
     * from model container output in CSV format.</p> <p> <b>Example for a multiclass
     * model:</b> If the model container output consists of label headers followed by
     * probabilities: <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>LabelIndex</code> to <code>0</code> to select the label headers
     * <code>['cat','dog','fish']</code>.</p>
     */
    inline int GetLabelIndex() const{ return m_labelIndex; }

    /**
     * <p>A zero-based index used to extract a label header or list of label headers
     * from model container output in CSV format.</p> <p> <b>Example for a multiclass
     * model:</b> If the model container output consists of label headers followed by
     * probabilities: <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>LabelIndex</code> to <code>0</code> to select the label headers
     * <code>['cat','dog','fish']</code>.</p>
     */
    inline bool LabelIndexHasBeenSet() const { return m_labelIndexHasBeenSet; }

    /**
     * <p>A zero-based index used to extract a label header or list of label headers
     * from model container output in CSV format.</p> <p> <b>Example for a multiclass
     * model:</b> If the model container output consists of label headers followed by
     * probabilities: <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>LabelIndex</code> to <code>0</code> to select the label headers
     * <code>['cat','dog','fish']</code>.</p>
     */
    inline void SetLabelIndex(int value) { m_labelIndexHasBeenSet = true; m_labelIndex = value; }

    /**
     * <p>A zero-based index used to extract a label header or list of label headers
     * from model container output in CSV format.</p> <p> <b>Example for a multiclass
     * model:</b> If the model container output consists of label headers followed by
     * probabilities: <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>LabelIndex</code> to <code>0</code> to select the label headers
     * <code>['cat','dog','fish']</code>.</p>
     */
    inline ClarifyInferenceConfig& WithLabelIndex(int value) { SetLabelIndex(value); return *this;}


    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline const Aws::String& GetProbabilityAttribute() const{ return m_probabilityAttribute; }

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline bool ProbabilityAttributeHasBeenSet() const { return m_probabilityAttributeHasBeenSet; }

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline void SetProbabilityAttribute(const Aws::String& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = value; }

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline void SetProbabilityAttribute(Aws::String&& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = std::move(value); }

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline void SetProbabilityAttribute(const char* value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute.assign(value); }

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithProbabilityAttribute(const Aws::String& value) { SetProbabilityAttribute(value); return *this;}

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithProbabilityAttribute(Aws::String&& value) { SetProbabilityAttribute(std::move(value)); return *this;}

    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline ClarifyInferenceConfig& WithProbabilityAttribute(const char* value) { SetProbabilityAttribute(value); return *this;}


    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline const Aws::String& GetLabelAttribute() const{ return m_labelAttribute; }

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline bool LabelAttributeHasBeenSet() const { return m_labelAttributeHasBeenSet; }

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline void SetLabelAttribute(const Aws::String& value) { m_labelAttributeHasBeenSet = true; m_labelAttribute = value; }

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline void SetLabelAttribute(Aws::String&& value) { m_labelAttributeHasBeenSet = true; m_labelAttribute = std::move(value); }

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline void SetLabelAttribute(const char* value) { m_labelAttributeHasBeenSet = true; m_labelAttribute.assign(value); }

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline ClarifyInferenceConfig& WithLabelAttribute(const Aws::String& value) { SetLabelAttribute(value); return *this;}

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline ClarifyInferenceConfig& WithLabelAttribute(Aws::String&& value) { SetLabelAttribute(std::move(value)); return *this;}

    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline ClarifyInferenceConfig& WithLabelAttribute(const char* value) { SetLabelAttribute(value); return *this;}


    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelHeaders() const{ return m_labelHeaders; }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline bool LabelHeadersHasBeenSet() const { return m_labelHeadersHasBeenSet; }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline void SetLabelHeaders(const Aws::Vector<Aws::String>& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders = value; }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline void SetLabelHeaders(Aws::Vector<Aws::String>&& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders = std::move(value); }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline ClarifyInferenceConfig& WithLabelHeaders(const Aws::Vector<Aws::String>& value) { SetLabelHeaders(value); return *this;}

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline ClarifyInferenceConfig& WithLabelHeaders(Aws::Vector<Aws::String>&& value) { SetLabelHeaders(std::move(value)); return *this;}

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline ClarifyInferenceConfig& AddLabelHeaders(const Aws::String& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders.push_back(value); return *this; }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline ClarifyInferenceConfig& AddLabelHeaders(Aws::String&& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>For multiclass classification problems, the label headers are the names of
     * the classes. Otherwise, the label header is the name of the predicted label.
     * These are used to help readability for the output of the
     * <code>InvokeEndpoint</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information. If there are no label headers in the model container output,
     * provide them manually using this parameter.</p>
     */
    inline ClarifyInferenceConfig& AddLabelHeaders(const char* value) { m_labelHeadersHasBeenSet = true; m_labelHeaders.push_back(value); return *this; }


    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatureHeaders() const{ return m_featureHeaders; }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline bool FeatureHeadersHasBeenSet() const { return m_featureHeadersHasBeenSet; }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline void SetFeatureHeaders(const Aws::Vector<Aws::String>& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders = value; }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline void SetFeatureHeaders(Aws::Vector<Aws::String>&& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders = std::move(value); }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& WithFeatureHeaders(const Aws::Vector<Aws::String>& value) { SetFeatureHeaders(value); return *this;}

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& WithFeatureHeaders(Aws::Vector<Aws::String>&& value) { SetFeatureHeaders(std::move(value)); return *this;}

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& AddFeatureHeaders(const Aws::String& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders.push_back(value); return *this; }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& AddFeatureHeaders(Aws::String&& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& AddFeatureHeaders(const char* value) { m_featureHeadersHasBeenSet = true; m_featureHeaders.push_back(value); return *this; }


    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline const Aws::Vector<ClarifyFeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<ClarifyFeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<ClarifyFeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& WithFeatureTypes(const Aws::Vector<ClarifyFeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& WithFeatureTypes(Aws::Vector<ClarifyFeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& AddFeatureTypes(const ClarifyFeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>A list of data types of the features (optional). Applicable only to NLP
     * explainability. If provided, <code>FeatureTypes</code> must have at least one
     * <code>'text'</code> string (for example, <code>['text']</code>). If
     * <code>FeatureTypes</code> is not provided, the explainer infers the feature
     * types based on the baseline data. The feature types are included in the endpoint
     * response payload. For additional information see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline ClarifyInferenceConfig& AddFeatureTypes(ClarifyFeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featuresAttribute;
    bool m_featuresAttributeHasBeenSet = false;

    Aws::String m_contentTemplate;
    bool m_contentTemplateHasBeenSet = false;

    int m_maxRecordCount;
    bool m_maxRecordCountHasBeenSet = false;

    int m_maxPayloadInMB;
    bool m_maxPayloadInMBHasBeenSet = false;

    int m_probabilityIndex;
    bool m_probabilityIndexHasBeenSet = false;

    int m_labelIndex;
    bool m_labelIndexHasBeenSet = false;

    Aws::String m_probabilityAttribute;
    bool m_probabilityAttributeHasBeenSet = false;

    Aws::String m_labelAttribute;
    bool m_labelAttributeHasBeenSet = false;

    Aws::Vector<Aws::String> m_labelHeaders;
    bool m_labelHeadersHasBeenSet = false;

    Aws::Vector<Aws::String> m_featureHeaders;
    bool m_featureHeadersHasBeenSet = false;

    Aws::Vector<ClarifyFeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
