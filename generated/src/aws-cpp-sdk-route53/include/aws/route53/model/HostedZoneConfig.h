/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains an optional comment about your hosted zone. If
   * you don't want to specify a comment, omit both the <code>HostedZoneConfig</code>
   * and <code>Comment</code> elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneConfig">AWS
   * API Reference</a></p>
   */
  class HostedZoneConfig
  {
  public:
    AWS_ROUTE53_API HostedZoneConfig();
    AWS_ROUTE53_API HostedZoneConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZoneConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline HostedZoneConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline HostedZoneConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline HostedZoneConfig& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether this is a private hosted zone.</p>
     */
    inline bool GetPrivateZone() const{ return m_privateZone; }
    inline bool PrivateZoneHasBeenSet() const { return m_privateZoneHasBeenSet; }
    inline void SetPrivateZone(bool value) { m_privateZoneHasBeenSet = true; m_privateZone = value; }
    inline HostedZoneConfig& WithPrivateZone(bool value) { SetPrivateZone(value); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    bool m_privateZone;
    bool m_privateZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
