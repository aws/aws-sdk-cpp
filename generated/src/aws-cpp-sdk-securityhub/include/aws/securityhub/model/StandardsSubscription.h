/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/StandardsStatus.h>
#include <aws/securityhub/model/StandardsControlsUpdatable.h>
#include <aws/securityhub/model/StandardsStatusReason.h>
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
   * <p>A resource that represents your subscription to a supported
   * standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsSubscription">AWS
   * API Reference</a></p>
   */
  class StandardsSubscription
  {
  public:
    AWS_SECURITYHUB_API StandardsSubscription() = default;
    AWS_SECURITYHUB_API StandardsSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the resource that represents your subscription to the
     * standard.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const { return m_standardsSubscriptionArn; }
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }
    template<typename StandardsSubscriptionArnT = Aws::String>
    void SetStandardsSubscriptionArn(StandardsSubscriptionArnT&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::forward<StandardsSubscriptionArnT>(value); }
    template<typename StandardsSubscriptionArnT = Aws::String>
    StandardsSubscription& WithStandardsSubscriptionArn(StandardsSubscriptionArnT&& value) { SetStandardsSubscriptionArn(std::forward<StandardsSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the standard.</p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    StandardsSubscription& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
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
    StandardsSubscription& WithStandardsInput(StandardsInputT&& value) { SetStandardsInput(std::forward<StandardsInputT>(value)); return *this;}
    template<typename StandardsInputKeyT = Aws::String, typename StandardsInputValueT = Aws::String>
    StandardsSubscription& AddStandardsInput(StandardsInputKeyT&& key, StandardsInputValueT&& value) {
      m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::forward<StandardsInputKeyT>(key), std::forward<StandardsInputValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of your subscription to the standard. Possible values are:</p>
     * <ul> <li> <p> <code>PENDING</code> - The standard is in the process of being
     * enabled. Or the standard is already enabled and Security Hub is adding new
     * controls to the standard.</p> </li> <li> <p> <code>READY</code> - The standard
     * is enabled.</p> </li> <li> <p> <code>INCOMPLETE</code> - The standard could not
     * be enabled completely. One or more errors (<code>StandardsStatusReason</code>)
     * occurred when Security Hub attempted to enable the standard.</p> </li> <li> <p>
     * <code>DELETING</code> - The standard is in the process of being disabled.</p>
     * </li> <li> <p> <code>FAILED</code> - The standard could not be disabled. One or
     * more errors (<code>StandardsStatusReason</code>) occurred when Security Hub
     * attempted to disable the standard.</p> </li> </ul>
     */
    inline StandardsStatus GetStandardsStatus() const { return m_standardsStatus; }
    inline bool StandardsStatusHasBeenSet() const { return m_standardsStatusHasBeenSet; }
    inline void SetStandardsStatus(StandardsStatus value) { m_standardsStatusHasBeenSet = true; m_standardsStatus = value; }
    inline StandardsSubscription& WithStandardsStatus(StandardsStatus value) { SetStandardsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you can retrieve information about and configure individual
     * controls that apply to the standard. Possible values are:</p> <ul> <li> <p>
     * <code>READY_FOR_UPDATES</code> - Controls in the standard can be retrieved and
     * configured.</p> </li> <li> <p> <code>NOT_READY_FOR_UPDATES</code> - Controls in
     * the standard cannot be retrieved or configured.</p> </li> </ul>
     */
    inline StandardsControlsUpdatable GetStandardsControlsUpdatable() const { return m_standardsControlsUpdatable; }
    inline bool StandardsControlsUpdatableHasBeenSet() const { return m_standardsControlsUpdatableHasBeenSet; }
    inline void SetStandardsControlsUpdatable(StandardsControlsUpdatable value) { m_standardsControlsUpdatableHasBeenSet = true; m_standardsControlsUpdatable = value; }
    inline StandardsSubscription& WithStandardsControlsUpdatable(StandardsControlsUpdatable value) { SetStandardsControlsUpdatable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status.</p>
     */
    inline const StandardsStatusReason& GetStandardsStatusReason() const { return m_standardsStatusReason; }
    inline bool StandardsStatusReasonHasBeenSet() const { return m_standardsStatusReasonHasBeenSet; }
    template<typename StandardsStatusReasonT = StandardsStatusReason>
    void SetStandardsStatusReason(StandardsStatusReasonT&& value) { m_standardsStatusReasonHasBeenSet = true; m_standardsStatusReason = std::forward<StandardsStatusReasonT>(value); }
    template<typename StandardsStatusReasonT = StandardsStatusReason>
    StandardsSubscription& WithStandardsStatusReason(StandardsStatusReasonT&& value) { SetStandardsStatusReason(std::forward<StandardsStatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet = false;

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_standardsInput;
    bool m_standardsInputHasBeenSet = false;

    StandardsStatus m_standardsStatus{StandardsStatus::NOT_SET};
    bool m_standardsStatusHasBeenSet = false;

    StandardsControlsUpdatable m_standardsControlsUpdatable{StandardsControlsUpdatable::NOT_SET};
    bool m_standardsControlsUpdatableHasBeenSet = false;

    StandardsStatusReason m_standardsStatusReason;
    bool m_standardsStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
