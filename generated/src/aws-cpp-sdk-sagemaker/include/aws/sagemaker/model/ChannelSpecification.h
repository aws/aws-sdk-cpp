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
    AWS_SAGEMAKER_API ChannelSpecification();
    AWS_SAGEMAKER_API ChannelSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ChannelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChannelSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChannelSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChannelSpecification& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ChannelSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ChannelSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ChannelSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline ChannelSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const{ return m_supportedContentTypes; }
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }
    inline void SetSupportedContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = value; }
    inline void SetSupportedContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::move(value); }
    inline ChannelSpecification& WithSupportedContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedContentTypes(value); return *this;}
    inline ChannelSpecification& WithSupportedContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedContentTypes(std::move(value)); return *this;}
    inline ChannelSpecification& AddSupportedContentTypes(const Aws::String& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }
    inline ChannelSpecification& AddSupportedContentTypes(Aws::String&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(std::move(value)); return *this; }
    inline ChannelSpecification& AddSupportedContentTypes(const char* value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline const Aws::Vector<CompressionType>& GetSupportedCompressionTypes() const{ return m_supportedCompressionTypes; }
    inline bool SupportedCompressionTypesHasBeenSet() const { return m_supportedCompressionTypesHasBeenSet; }
    inline void SetSupportedCompressionTypes(const Aws::Vector<CompressionType>& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes = value; }
    inline void SetSupportedCompressionTypes(Aws::Vector<CompressionType>&& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes = std::move(value); }
    inline ChannelSpecification& WithSupportedCompressionTypes(const Aws::Vector<CompressionType>& value) { SetSupportedCompressionTypes(value); return *this;}
    inline ChannelSpecification& WithSupportedCompressionTypes(Aws::Vector<CompressionType>&& value) { SetSupportedCompressionTypes(std::move(value)); return *this;}
    inline ChannelSpecification& AddSupportedCompressionTypes(const CompressionType& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes.push_back(value); return *this; }
    inline ChannelSpecification& AddSupportedCompressionTypes(CompressionType&& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<TrainingInputMode>& GetSupportedInputModes() const{ return m_supportedInputModes; }
    inline bool SupportedInputModesHasBeenSet() const { return m_supportedInputModesHasBeenSet; }
    inline void SetSupportedInputModes(const Aws::Vector<TrainingInputMode>& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes = value; }
    inline void SetSupportedInputModes(Aws::Vector<TrainingInputMode>&& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes = std::move(value); }
    inline ChannelSpecification& WithSupportedInputModes(const Aws::Vector<TrainingInputMode>& value) { SetSupportedInputModes(value); return *this;}
    inline ChannelSpecification& WithSupportedInputModes(Aws::Vector<TrainingInputMode>&& value) { SetSupportedInputModes(std::move(value)); return *this;}
    inline ChannelSpecification& AddSupportedInputModes(const TrainingInputMode& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes.push_back(value); return *this; }
    inline ChannelSpecification& AddSupportedInputModes(TrainingInputMode&& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isRequired;
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
