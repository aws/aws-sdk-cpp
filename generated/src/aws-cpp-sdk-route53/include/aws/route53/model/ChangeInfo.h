﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/ChangeStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that describes change information about changes made to your
   * hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeInfo">AWS
   * API Reference</a></p>
   */
  class ChangeInfo
  {
  public:
    AWS_ROUTE53_API ChangeInfo();
    AWS_ROUTE53_API ChangeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API ChangeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ChangeInfo& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ChangeInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ChangeInfo& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChangeInfo& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}
    inline ChangeInfo& WithStatus(ChangeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the change request was submitted in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const{ return m_submittedAt; }
    inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
    inline void SetSubmittedAt(const Aws::Utils::DateTime& value) { m_submittedAtHasBeenSet = true; m_submittedAt = value; }
    inline void SetSubmittedAt(Aws::Utils::DateTime&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = std::move(value); }
    inline ChangeInfo& WithSubmittedAt(const Aws::Utils::DateTime& value) { SetSubmittedAt(value); return *this;}
    inline ChangeInfo& WithSubmittedAt(Aws::Utils::DateTime&& value) { SetSubmittedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment you can provide.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline ChangeInfo& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline ChangeInfo& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline ChangeInfo& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ChangeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAt;
    bool m_submittedAtHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
