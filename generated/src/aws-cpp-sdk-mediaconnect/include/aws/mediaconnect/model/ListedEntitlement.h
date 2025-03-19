/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> An entitlement that has been granted to you from other Amazon Web Services
   * accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedEntitlement">AWS
   * API Reference</a></p>
   */
  class ListedEntitlement
  {
  public:
    AWS_MEDIACONNECT_API ListedEntitlement() = default;
    AWS_MEDIACONNECT_API ListedEntitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedEntitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Percentage from 0-100 of the data transfer cost to be billed to the
     * subscriber.</p>
     */
    inline int GetDataTransferSubscriberFeePercent() const { return m_dataTransferSubscriberFeePercent; }
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }
    inline ListedEntitlement& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the entitlement.</p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    ListedEntitlement& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the entitlement.</p>
     */
    inline const Aws::String& GetEntitlementName() const { return m_entitlementName; }
    inline bool EntitlementNameHasBeenSet() const { return m_entitlementNameHasBeenSet; }
    template<typename EntitlementNameT = Aws::String>
    void SetEntitlementName(EntitlementNameT&& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = std::forward<EntitlementNameT>(value); }
    template<typename EntitlementNameT = Aws::String>
    ListedEntitlement& WithEntitlementName(EntitlementNameT&& value) { SetEntitlementName(std::forward<EntitlementNameT>(value)); return *this;}
    ///@}
  private:

    int m_dataTransferSubscriberFeePercent{0};
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_entitlementName;
    bool m_entitlementNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
