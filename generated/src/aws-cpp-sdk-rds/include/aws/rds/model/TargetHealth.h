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
    AWS_RDS_API TargetHealth();
    AWS_RDS_API TargetHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API TargetHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline const TargetState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline void SetState(const TargetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline void SetState(TargetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline TargetHealth& WithState(const TargetState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the connection health lifecycle for the RDS Proxy
     * target. The following is a typical lifecycle example for the states of an RDS
     * Proxy target:</p> <p> <code>registering</code> &gt; <code>unavailable</code>
     * &gt; <code>available</code> &gt; <code>unavailable</code> &gt;
     * <code>available</code> </p>
     */
    inline TargetHealth& WithState(TargetState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline const TargetHealthReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline void SetReason(const TargetHealthReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline void SetReason(TargetHealthReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline TargetHealth& WithReason(const TargetHealthReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the current health <code>State</code> of the RDS Proxy
     * target.</p>
     */
    inline TargetHealth& WithReason(TargetHealthReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline TargetHealth& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline TargetHealth& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the health of the RDS Proxy target. If the
     * <code>State</code> is <code>AVAILABLE</code>, a description is not included.</p>
     */
    inline TargetHealth& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    TargetState m_state;
    bool m_stateHasBeenSet = false;

    TargetHealthReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
