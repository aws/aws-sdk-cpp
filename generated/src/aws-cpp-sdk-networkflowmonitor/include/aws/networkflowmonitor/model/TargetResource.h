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
   * <p>A target resource in a scope. The resource is identified by a Region and a
   * target identifier, which includes a target ID and a target type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TargetResource">AWS
   * API Reference</a></p>
   */
  class TargetResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TargetResource();
    AWS_NETWORKFLOWMONITOR_API TargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A target identifier is a pair of identifying information for a resource that
     * is included in a target. A target identifier includes the target ID and the
     * target type.</p>
     */
    inline const TargetIdentifier& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const TargetIdentifier& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(TargetIdentifier&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline TargetResource& WithTargetIdentifier(const TargetIdentifier& value) { SetTargetIdentifier(value); return *this;}
    inline TargetResource& WithTargetIdentifier(TargetIdentifier&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the target resource is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline TargetResource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline TargetResource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline TargetResource& WithRegion(const char* value) { SetRegion(value); return *this;}
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
