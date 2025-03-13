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
    AWS_REDSHIFT_API ReferenceLink() = default;
    AWS_REDSHIFT_API ReferenceLink(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReferenceLink& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The hyperlink text that describes the link to more information.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ReferenceLink& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL address to find more information.</p>
     */
    inline const Aws::String& GetLink() const { return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    template<typename LinkT = Aws::String>
    void SetLink(LinkT&& value) { m_linkHasBeenSet = true; m_link = std::forward<LinkT>(value); }
    template<typename LinkT = Aws::String>
    ReferenceLink& WithLink(LinkT&& value) { SetLink(std::forward<LinkT>(value)); return *this;}
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
