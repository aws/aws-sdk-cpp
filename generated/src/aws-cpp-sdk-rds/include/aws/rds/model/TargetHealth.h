/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/TargetState.h>
#include <aws/rds/model/TargetHealthReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Information about the connection health of an RDS Proxy target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/TargetHealth">AWS
   * API Reference</a></p>
   */
  class TargetHealth
  {
  public:
    AWS_RDS_API TargetHealth() = default;
    AWS_RDS_API TargetHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API TargetHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline TargetState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TargetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TargetHealth& WithState(TargetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline TargetHealthReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(TargetHealthReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline TargetHealth& WithReason(TargetHealthReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TargetHealth& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    TargetState m_state{TargetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    TargetHealthReason m_reason{TargetHealthReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
