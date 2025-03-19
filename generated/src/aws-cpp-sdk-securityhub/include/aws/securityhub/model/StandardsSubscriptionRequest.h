/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The standard that you want to enable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsSubscriptionRequest">AWS
   * API Reference</a></p>
   */
  class StandardsSubscriptionRequest
  {
  public:
    AWS_SECURITYHUB_API StandardsSubscriptionRequest() = default;
    AWS_SECURITYHUB_API StandardsSubscriptionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsSubscriptionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the standard that you want to enable. To view the list of
     * available standards and their ARNs, use the <code>DescribeStandards</code>
     * operation.</p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    StandardsSubscriptionRequest& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStandardsInput() const { return m_standardsInput; }
    inline bool StandardsInputHasBeenSet() const { return m_standardsInputHasBeenSet; }
    template<typename StandardsInputT = Aws::Map<Aws::String, Aws::String>>
    void SetStandardsInput(StandardsInputT&& value) { m_standardsInputHasBeenSet = true; m_standardsInput = std::forward<StandardsInputT>(value); }
    template<typename StandardsInputT = Aws::Map<Aws::String, Aws::String>>
    StandardsSubscriptionRequest& WithStandardsInput(StandardsInputT&& value) { SetStandardsInput(std::forward<StandardsInputT>(value)); return *this;}
    template<typename StandardsInputKeyT = Aws::String, typename StandardsInputValueT = Aws::String>
    StandardsSubscriptionRequest& AddStandardsInput(StandardsInputKeyT&& key, StandardsInputValueT&& value) {
      m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::forward<StandardsInputKeyT>(key), std::forward<StandardsInputValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_standardsInput;
    bool m_standardsInputHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
