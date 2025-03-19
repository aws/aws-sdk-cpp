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
    AWS_SAGEMAKER_API ClarifyInferenceConfig() = default;
    AWS_SAGEMAKER_API ClarifyInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the JMESPath expression to extract the features from a model
     * container input in JSON Lines format. For example, if
     * <code>FeaturesAttribute</code> is the JMESPath expression
     * <code>'myfeatures'</code>, it extracts a list of features <code>[1,2,3]</code>
     * from request data <code>'{"myfeatures":[1,2,3]}'</code>.</p>
     */
    inline const Aws::String& GetFeaturesAttribute() const { return m_featuresAttribute; }
    inline bool FeaturesAttributeHasBeenSet() const { return m_featuresAttributeHasBeenSet; }
    template<typename FeaturesAttributeT = Aws::String>
    void SetFeaturesAttribute(FeaturesAttributeT&& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = std::forward<FeaturesAttributeT>(value); }
    template<typename FeaturesAttributeT = Aws::String>
    ClarifyInferenceConfig& WithFeaturesAttribute(FeaturesAttributeT&& value) { SetFeaturesAttribute(std::forward<FeaturesAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A template string used to format a JSON record into an acceptable model
     * container input. For example, a <code>ContentTemplate</code> string
     * <code>'{"myfeatures":$features}'</code> will format a list of features
     * <code>[1,2,3]</code> into the record string
     * <code>'{"myfeatures":[1,2,3]}'</code>. Required only when the model container
     * input is in JSON Lines format.</p>
     */
    inline const Aws::String& GetContentTemplate() const { return m_contentTemplate; }
    inline bool ContentTemplateHasBeenSet() const { return m_contentTemplateHasBeenSet; }
    template<typename ContentTemplateT = Aws::String>
    void SetContentTemplate(ContentTemplateT&& value) { m_contentTemplateHasBeenSet = true; m_contentTemplate = std::forward<ContentTemplateT>(value); }
    template<typename ContentTemplateT = Aws::String>
    ClarifyInferenceConfig& WithContentTemplate(ContentTemplateT&& value) { SetContentTemplate(std::forward<ContentTemplateT>(value)); return *this;}
    ///@}

    ///@{
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
    inline int GetMaxRecordCount() const { return m_maxRecordCount; }
    inline bool MaxRecordCountHasBeenSet() const { return m_maxRecordCountHasBeenSet; }
    inline void SetMaxRecordCount(int value) { m_maxRecordCountHasBeenSet = true; m_maxRecordCount = value; }
    inline ClarifyInferenceConfig& WithMaxRecordCount(int value) { SetMaxRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum payload size (MB) allowed of a request from the explainer to the
     * model container. Defaults to <code>6</code> MB.</p>
     */
    inline int GetMaxPayloadInMB() const { return m_maxPayloadInMB; }
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }
    inline ClarifyInferenceConfig& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}
    ///@}

    ///@{
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
    inline int GetProbabilityIndex() const { return m_probabilityIndex; }
    inline bool ProbabilityIndexHasBeenSet() const { return m_probabilityIndexHasBeenSet; }
    inline void SetProbabilityIndex(int value) { m_probabilityIndexHasBeenSet = true; m_probabilityIndex = value; }
    inline ClarifyInferenceConfig& WithProbabilityIndex(int value) { SetProbabilityIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A zero-based index used to extract a label header or list of label headers
     * from model container output in CSV format.</p> <p> <b>Example for a multiclass
     * model:</b> If the model container output consists of label headers followed by
     * probabilities: <code>'"[\'cat\',\'dog\',\'fish\']","[0.1,0.6,0.3]"'</code>, set
     * <code>LabelIndex</code> to <code>0</code> to select the label headers
     * <code>['cat','dog','fish']</code>.</p>
     */
    inline int GetLabelIndex() const { return m_labelIndex; }
    inline bool LabelIndexHasBeenSet() const { return m_labelIndexHasBeenSet; }
    inline void SetLabelIndex(int value) { m_labelIndexHasBeenSet = true; m_labelIndex = value; }
    inline ClarifyInferenceConfig& WithLabelIndex(int value) { SetLabelIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JMESPath expression used to extract the probability (or score) from the
     * model container output if the model container is in JSON Lines format.</p> <p>
     * <b>Example</b>: If the model container output of a single request is
     * <code>'{"predicted_label":1,"probability":0.6}'</code>, then set
     * <code>ProbabilityAttribute</code> to <code>'probability'</code>.</p>
     */
    inline const Aws::String& GetProbabilityAttribute() const { return m_probabilityAttribute; }
    inline bool ProbabilityAttributeHasBeenSet() const { return m_probabilityAttributeHasBeenSet; }
    template<typename ProbabilityAttributeT = Aws::String>
    void SetProbabilityAttribute(ProbabilityAttributeT&& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = std::forward<ProbabilityAttributeT>(value); }
    template<typename ProbabilityAttributeT = Aws::String>
    ClarifyInferenceConfig& WithProbabilityAttribute(ProbabilityAttributeT&& value) { SetProbabilityAttribute(std::forward<ProbabilityAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JMESPath expression used to locate the list of label headers in the model
     * container output.</p> <p> <b>Example</b>: If the model container output of a
     * batch request is
     * <code>'{"labels":["cat","dog","fish"],"probability":[0.6,0.3,0.1]}'</code>, then
     * set <code>LabelAttribute</code> to <code>'labels'</code> to extract the list of
     * label headers <code>["cat","dog","fish"]</code> </p>
     */
    inline const Aws::String& GetLabelAttribute() const { return m_labelAttribute; }
    inline bool LabelAttributeHasBeenSet() const { return m_labelAttributeHasBeenSet; }
    template<typename LabelAttributeT = Aws::String>
    void SetLabelAttribute(LabelAttributeT&& value) { m_labelAttributeHasBeenSet = true; m_labelAttribute = std::forward<LabelAttributeT>(value); }
    template<typename LabelAttributeT = Aws::String>
    ClarifyInferenceConfig& WithLabelAttribute(LabelAttributeT&& value) { SetLabelAttribute(std::forward<LabelAttributeT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetLabelHeaders() const { return m_labelHeaders; }
    inline bool LabelHeadersHasBeenSet() const { return m_labelHeadersHasBeenSet; }
    template<typename LabelHeadersT = Aws::Vector<Aws::String>>
    void SetLabelHeaders(LabelHeadersT&& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders = std::forward<LabelHeadersT>(value); }
    template<typename LabelHeadersT = Aws::Vector<Aws::String>>
    ClarifyInferenceConfig& WithLabelHeaders(LabelHeadersT&& value) { SetLabelHeaders(std::forward<LabelHeadersT>(value)); return *this;}
    template<typename LabelHeadersT = Aws::String>
    ClarifyInferenceConfig& AddLabelHeaders(LabelHeadersT&& value) { m_labelHeadersHasBeenSet = true; m_labelHeaders.emplace_back(std::forward<LabelHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the features. If provided, these are included in the endpoint
     * response payload to help readability of the <code>InvokeEndpoint</code> output.
     * See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Response</a>
     * section under <b>Invoke the endpoint</b> in the Developer Guide for more
     * information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatureHeaders() const { return m_featureHeaders; }
    inline bool FeatureHeadersHasBeenSet() const { return m_featureHeadersHasBeenSet; }
    template<typename FeatureHeadersT = Aws::Vector<Aws::String>>
    void SetFeatureHeaders(FeatureHeadersT&& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders = std::forward<FeatureHeadersT>(value); }
    template<typename FeatureHeadersT = Aws::Vector<Aws::String>>
    ClarifyInferenceConfig& WithFeatureHeaders(FeatureHeadersT&& value) { SetFeatureHeaders(std::forward<FeatureHeadersT>(value)); return *this;}
    template<typename FeatureHeadersT = Aws::String>
    ClarifyInferenceConfig& AddFeatureHeaders(FeatureHeadersT&& value) { m_featureHeadersHasBeenSet = true; m_featureHeaders.emplace_back(std::forward<FeatureHeadersT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<ClarifyFeatureType>& GetFeatureTypes() const { return m_featureTypes; }
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }
    template<typename FeatureTypesT = Aws::Vector<ClarifyFeatureType>>
    void SetFeatureTypes(FeatureTypesT&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::forward<FeatureTypesT>(value); }
    template<typename FeatureTypesT = Aws::Vector<ClarifyFeatureType>>
    ClarifyInferenceConfig& WithFeatureTypes(FeatureTypesT&& value) { SetFeatureTypes(std::forward<FeatureTypesT>(value)); return *this;}
    inline ClarifyInferenceConfig& AddFeatureTypes(ClarifyFeatureType value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_featuresAttribute;
    bool m_featuresAttributeHasBeenSet = false;

    Aws::String m_contentTemplate;
    bool m_contentTemplateHasBeenSet = false;

    int m_maxRecordCount{0};
    bool m_maxRecordCountHasBeenSet = false;

    int m_maxPayloadInMB{0};
    bool m_maxPayloadInMBHasBeenSet = false;

    int m_probabilityIndex{0};
    bool m_probabilityIndexHasBeenSet = false;

    int m_labelIndex{0};
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
