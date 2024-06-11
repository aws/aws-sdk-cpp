/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/StandardsStatus.h>
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
    AWS_SECURITYHUB_API StandardsSubscription();
    AWS_SECURITYHUB_API StandardsSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const{ return m_standardsSubscriptionArn; }
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }
    inline void SetStandardsSubscriptionArn(const Aws::String& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = value; }
    inline void SetStandardsSubscriptionArn(Aws::String&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::move(value); }
    inline void SetStandardsSubscriptionArn(const char* value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn.assign(value); }
    inline StandardsSubscription& WithStandardsSubscriptionArn(const Aws::String& value) { SetStandardsSubscriptionArn(value); return *this;}
    inline StandardsSubscription& WithStandardsSubscriptionArn(Aws::String&& value) { SetStandardsSubscriptionArn(std::move(value)); return *this;}
    inline StandardsSubscription& WithStandardsSubscriptionArn(const char* value) { SetStandardsSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a standard.</p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }
    inline StandardsSubscription& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}
    inline StandardsSubscription& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}
    inline StandardsSubscription& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStandardsInput() const{ return m_standardsInput; }
    inline bool StandardsInputHasBeenSet() const { return m_standardsInputHasBeenSet; }
    inline void SetStandardsInput(const Aws::Map<Aws::String, Aws::String>& value) { m_standardsInputHasBeenSet = true; m_standardsInput = value; }
    inline void SetStandardsInput(Aws::Map<Aws::String, Aws::String>&& value) { m_standardsInputHasBeenSet = true; m_standardsInput = std::move(value); }
    inline StandardsSubscription& WithStandardsInput(const Aws::Map<Aws::String, Aws::String>& value) { SetStandardsInput(value); return *this;}
    inline StandardsSubscription& WithStandardsInput(Aws::Map<Aws::String, Aws::String>&& value) { SetStandardsInput(std::move(value)); return *this;}
    inline StandardsSubscription& AddStandardsInput(const Aws::String& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }
    inline StandardsSubscription& AddStandardsInput(const Aws::String& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), std::move(value)); return *this; }
    inline StandardsSubscription& AddStandardsInput(const char* key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }
    inline StandardsSubscription& AddStandardsInput(const char* key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the standard subscription.</p> <p>The status values are as
     * follows:</p> <ul> <li> <p> <code>PENDING</code> - Standard is in the process of
     * being enabled.</p> </li> <li> <p> <code>READY</code> - Standard is enabled.</p>
     * </li> <li> <p> <code>INCOMPLETE</code> - Standard could not be enabled
     * completely. Some controls may not be available.</p> </li> <li> <p>
     * <code>DELETING</code> - Standard is in the process of being disabled.</p> </li>
     * <li> <p> <code>FAILED</code> - Standard could not be disabled.</p> </li> </ul>
     */
    inline const StandardsStatus& GetStandardsStatus() const{ return m_standardsStatus; }
    inline bool StandardsStatusHasBeenSet() const { return m_standardsStatusHasBeenSet; }
    inline void SetStandardsStatus(const StandardsStatus& value) { m_standardsStatusHasBeenSet = true; m_standardsStatus = value; }
    inline void SetStandardsStatus(StandardsStatus&& value) { m_standardsStatusHasBeenSet = true; m_standardsStatus = std::move(value); }
    inline StandardsSubscription& WithStandardsStatus(const StandardsStatus& value) { SetStandardsStatus(value); return *this;}
    inline StandardsSubscription& WithStandardsStatus(StandardsStatus&& value) { SetStandardsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status.</p>
     */
    inline const StandardsStatusReason& GetStandardsStatusReason() const{ return m_standardsStatusReason; }
    inline bool StandardsStatusReasonHasBeenSet() const { return m_standardsStatusReasonHasBeenSet; }
    inline void SetStandardsStatusReason(const StandardsStatusReason& value) { m_standardsStatusReasonHasBeenSet = true; m_standardsStatusReason = value; }
    inline void SetStandardsStatusReason(StandardsStatusReason&& value) { m_standardsStatusReasonHasBeenSet = true; m_standardsStatusReason = std::move(value); }
    inline StandardsSubscription& WithStandardsStatusReason(const StandardsStatusReason& value) { SetStandardsStatusReason(value); return *this;}
    inline StandardsSubscription& WithStandardsStatusReason(StandardsStatusReason&& value) { SetStandardsStatusReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet = false;

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_standardsInput;
    bool m_standardsInputHasBeenSet = false;

    StandardsStatus m_standardsStatus;
    bool m_standardsStatusHasBeenSet = false;

    StandardsStatusReason m_standardsStatusReason;
    bool m_standardsStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
