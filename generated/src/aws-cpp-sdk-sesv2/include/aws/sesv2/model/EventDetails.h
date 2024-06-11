/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Bounce.h>
#include <aws/sesv2/model/Complaint.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p> Contains a <code>Bounce</code> object if the event type is
   * <code>BOUNCE</code>. Contains a <code>Complaint</code> object if the event type
   * is <code>COMPLAINT</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EventDetails">AWS
   * API Reference</a></p>
   */
  class EventDetails
  {
  public:
    AWS_SESV2_API EventDetails();
    AWS_SESV2_API EventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a <code>Bounce</code> event.</p>
     */
    inline const Bounce& GetBounce() const{ return m_bounce; }
    inline bool BounceHasBeenSet() const { return m_bounceHasBeenSet; }
    inline void SetBounce(const Bounce& value) { m_bounceHasBeenSet = true; m_bounce = value; }
    inline void SetBounce(Bounce&& value) { m_bounceHasBeenSet = true; m_bounce = std::move(value); }
    inline EventDetails& WithBounce(const Bounce& value) { SetBounce(value); return *this;}
    inline EventDetails& WithBounce(Bounce&& value) { SetBounce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a <code>Complaint</code> event.</p>
     */
    inline const Complaint& GetComplaint() const{ return m_complaint; }
    inline bool ComplaintHasBeenSet() const { return m_complaintHasBeenSet; }
    inline void SetComplaint(const Complaint& value) { m_complaintHasBeenSet = true; m_complaint = value; }
    inline void SetComplaint(Complaint&& value) { m_complaintHasBeenSet = true; m_complaint = std::move(value); }
    inline EventDetails& WithComplaint(const Complaint& value) { SetComplaint(value); return *this;}
    inline EventDetails& WithComplaint(Complaint&& value) { SetComplaint(std::move(value)); return *this;}
    ///@}
  private:

    Bounce m_bounce;
    bool m_bounceHasBeenSet = false;

    Complaint m_complaint;
    bool m_complaintHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
