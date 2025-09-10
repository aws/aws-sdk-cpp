/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/TargetIdentifier.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A target resource in a scope. The resource is identified by a Region and an
   * account, defined by a target identifier. A target identifier is made up of a
   * target ID (currently always an account ID) and a target type (currently always
   * <code>ACCOUNT</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TargetResource">AWS
   * API Reference</a></p>
   */
  class TargetResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TargetResource() = default;
    AWS_NETWORKFLOWMONITOR_API TargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A target identifier is a pair of identifying information for a scope. A
     * target identifier is made up of a targetID (currently always an account ID) and
     * a targetType (currently always an account).</p>
     */
    inline const TargetIdentifier& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = TargetIdentifier>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = TargetIdentifier>
    TargetResource& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the scope.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    TargetResource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    TargetIdentifier m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
