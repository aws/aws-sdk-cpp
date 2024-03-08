/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>A link to documentation that provides additional information for a
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DocLink">AWS API
   * Reference</a></p>
   */
  class DocLink
  {
  public:
    AWS_RDS_API DocLink();
    AWS_RDS_API DocLink(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DocLink& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline DocLink& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline DocLink& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text with the link to documentation for the recommendation.</p>
     */
    inline DocLink& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline DocLink& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline DocLink& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the documentation for the recommendation.</p>
     */
    inline DocLink& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
