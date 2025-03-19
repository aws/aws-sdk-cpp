/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
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
   * <p>Defines a named input source, called a channel, to be used by an
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ChannelSpecification">AWS
   * API Reference</a></p>
   */
  class ChannelSpecification
  {
  public:
    AWS_SAGEMAKER_API ChannelSpecification() = default;
    AWS_SAGEMAKER_API ChannelSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ChannelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ChannelSpecification& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ChannelSpecification& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline ChannelSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const { return m_supportedContentTypes; }
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::forward<SupportedContentTypesT>(value); }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    ChannelSpecification& WithSupportedContentTypes(SupportedContentTypesT&& value) { SetSupportedContentTypes(std::forward<SupportedContentTypesT>(value)); return *this;}
    template<typename SupportedContentTypesT = Aws::String>
    ChannelSpecification& AddSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.emplace_back(std::forward<SupportedContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline const Aws::Vector<CompressionType>& GetSupportedCompressionTypes() const { return m_supportedCompressionTypes; }
    inline bool SupportedCompressionTypesHasBeenSet() const { return m_supportedCompressionTypesHasBeenSet; }
    template<typename SupportedCompressionTypesT = Aws::Vector<CompressionType>>
    void SetSupportedCompressionTypes(SupportedCompressionTypesT&& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes = std::forward<SupportedCompressionTypesT>(value); }
    template<typename SupportedCompressionTypesT = Aws::Vector<CompressionType>>
    ChannelSpecification& WithSupportedCompressionTypes(SupportedCompressionTypesT&& value) { SetSupportedCompressionTypes(std::forward<SupportedCompressionTypesT>(value)); return *this;}
    inline ChannelSpecification& AddSupportedCompressionTypes(CompressionType value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline const Aws::Vector<TrainingInputMode>& GetSupportedInputModes() const { return m_supportedInputModes; }
    inline bool SupportedInputModesHasBeenSet() const { return m_supportedInputModesHasBeenSet; }
    template<typename SupportedInputModesT = Aws::Vector<TrainingInputMode>>
    void SetSupportedInputModes(SupportedInputModesT&& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes = std::forward<SupportedInputModesT>(value); }
    template<typename SupportedInputModesT = Aws::Vector<TrainingInputMode>>
    ChannelSpecification& WithSupportedInputModes(SupportedInputModesT&& value) { SetSupportedInputModes(std::forward<SupportedInputModesT>(value)); return *this;}
    inline ChannelSpecification& AddSupportedInputModes(TrainingInputMode value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isRequired{false};
    bool m_isRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet = false;

    Aws::Vector<CompressionType> m_supportedCompressionTypes;
    bool m_supportedCompressionTypesHasBeenSet = false;

    Aws::Vector<TrainingInputMode> m_supportedInputModes;
    bool m_supportedInputModesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
