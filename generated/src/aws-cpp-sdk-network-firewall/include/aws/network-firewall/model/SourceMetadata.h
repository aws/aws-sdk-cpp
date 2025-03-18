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
   * <p>High-level information about the managed rule group that your own rule group
   * is copied from. You can use the the metadata to track version updates made to
   * the originating rule group. You can retrieve all objects for a rule group by
   * calling <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html">DescribeRuleGroup</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SourceMetadata">AWS
   * API Reference</a></p>
   */
  class SourceMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API SourceMetadata() = default;
    AWS_NETWORKFIREWALL_API SourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    SourceMetadata& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline const Aws::String& GetSourceUpdateToken() const { return m_sourceUpdateToken; }
    inline bool SourceUpdateTokenHasBeenSet() const { return m_sourceUpdateTokenHasBeenSet; }
    template<typename SourceUpdateTokenT = Aws::String>
    void SetSourceUpdateToken(SourceUpdateTokenT&& value) { m_sourceUpdateTokenHasBeenSet = true; m_sourceUpdateToken = std::forward<SourceUpdateTokenT>(value); }
    template<typename SourceUpdateTokenT = Aws::String>
    SourceMetadata& WithSourceUpdateToken(SourceUpdateTokenT&& value) { SetSourceUpdateToken(std::forward<SourceUpdateTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceUpdateToken;
    bool m_sourceUpdateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
