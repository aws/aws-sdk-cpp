/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextType.h>
#include <aws/partnercentral-selling/model/EngagementContextPayload.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Provides detailed context information for an Engagement. This structure
   * allows for specifying the type of context and its associated payload.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementContextDetails">AWS
   * API Reference</a></p>
   */
  class EngagementContextDetails
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementContextDetails() = default;
    AWS_PARTNERCENTRALSELLING_API EngagementContextDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementContextDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of Engagement context. Valid values are "CustomerProject"
     * or "Document", indicating whether the context relates to a customer project or a
     * document respectively. </p>
     */
    inline EngagementContextType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EngagementContextType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EngagementContextDetails& WithType(EngagementContextType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the specific details of the Engagement context. The structure of
     * this payload varies depending on the Type field. </p>
     */
    inline const EngagementContextPayload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = EngagementContextPayload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = EngagementContextPayload>
    EngagementContextDetails& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    EngagementContextType m_type{EngagementContextType::NOT_SET};
    bool m_typeHasBeenSet = false;

    EngagementContextPayload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
