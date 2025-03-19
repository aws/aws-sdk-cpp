/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the CloudFormation stack output. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFormationStackOutputsDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudFormationStackOutputsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails() = default;
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsCloudFormationStackOutputsDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key associated with the output. </p>
     */
    inline const Aws::String& GetOutputKey() const { return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    template<typename OutputKeyT = Aws::String>
    void SetOutputKey(OutputKeyT&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::forward<OutputKeyT>(value); }
    template<typename OutputKeyT = Aws::String>
    AwsCloudFormationStackOutputsDetails& WithOutputKey(OutputKeyT&& value) { SetOutputKey(std::forward<OutputKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with the output. </p>
     */
    inline const Aws::String& GetOutputValue() const { return m_outputValue; }
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }
    template<typename OutputValueT = Aws::String>
    void SetOutputValue(OutputValueT&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::forward<OutputValueT>(value); }
    template<typename OutputValueT = Aws::String>
    AwsCloudFormationStackOutputsDetails& WithOutputValue(OutputValueT&& value) { SetOutputValue(std::forward<OutputValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet = false;

    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
