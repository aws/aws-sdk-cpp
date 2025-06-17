/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A complex type containing details about a Suricata rule. Contains:</p> <ul>
   * <li> <p> <code>SID</code> </p> </li> <li> <p> <code>Msg</code> </p> </li> <li>
   * <p> <code>Metadata</code> </p> </li> </ul> <p>Summaries are available for rule
   * groups you manage and for active threat defense Amazon Web Services managed rule
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_NETWORKFIREWALL_API RuleSummary() = default;
    AWS_NETWORKFIREWALL_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (Signature ID) of the Suricata rule.</p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    RuleSummary& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents taken from the rule's msg field.</p>
     */
    inline const Aws::String& GetMsg() const { return m_msg; }
    inline bool MsgHasBeenSet() const { return m_msgHasBeenSet; }
    template<typename MsgT = Aws::String>
    void SetMsg(MsgT&& value) { m_msgHasBeenSet = true; m_msg = std::forward<MsgT>(value); }
    template<typename MsgT = Aws::String>
    RuleSummary& WithMsg(MsgT&& value) { SetMsg(std::forward<MsgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the rule's metadata.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    RuleSummary& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;

    Aws::String m_msg;
    bool m_msgHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
