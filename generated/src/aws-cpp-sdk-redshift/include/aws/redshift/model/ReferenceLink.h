/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>A link to an Amazon Redshift Advisor reference for more information about a
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReferenceLink">AWS
   * API Reference</a></p>
   */
  class ReferenceLink
  {
  public:
    AWS_REDSHIFT_API ReferenceLink();
    AWS_REDSHIFT_API ReferenceLink(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReferenceLink& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The hyperlink text that describes the link to more information.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ReferenceLink& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ReferenceLink& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ReferenceLink& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL address to find more information.</p>
     */
    inline const Aws::String& GetLink() const{ return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }
    inline ReferenceLink& WithLink(const Aws::String& value) { SetLink(value); return *this;}
    inline ReferenceLink& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}
    inline ReferenceLink& WithLink(const char* value) { SetLink(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
