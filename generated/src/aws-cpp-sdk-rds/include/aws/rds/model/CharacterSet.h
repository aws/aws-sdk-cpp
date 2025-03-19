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
   * <p>This data type is used as a response element in the action
   * <code>DescribeDBEngineVersions</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CharacterSet">AWS
   * API Reference</a></p>
   */
  class CharacterSet
  {
  public:
    AWS_RDS_API CharacterSet() = default;
    AWS_RDS_API CharacterSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API CharacterSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    CharacterSet& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetDescription() const { return m_characterSetDescription; }
    inline bool CharacterSetDescriptionHasBeenSet() const { return m_characterSetDescriptionHasBeenSet; }
    template<typename CharacterSetDescriptionT = Aws::String>
    void SetCharacterSetDescription(CharacterSetDescriptionT&& value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription = std::forward<CharacterSetDescriptionT>(value); }
    template<typename CharacterSetDescriptionT = Aws::String>
    CharacterSet& WithCharacterSetDescription(CharacterSetDescriptionT&& value) { SetCharacterSetDescription(std::forward<CharacterSetDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_characterSetDescription;
    bool m_characterSetDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
