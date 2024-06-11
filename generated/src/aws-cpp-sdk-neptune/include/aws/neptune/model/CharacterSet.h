/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Specifies a character set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CharacterSet">AWS
   * API Reference</a></p>
   */
  class CharacterSet
  {
  public:
    AWS_NEPTUNE_API CharacterSet();
    AWS_NEPTUNE_API CharacterSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API CharacterSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline CharacterSet& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline CharacterSet& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline CharacterSet& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetDescription() const{ return m_characterSetDescription; }
    inline bool CharacterSetDescriptionHasBeenSet() const { return m_characterSetDescriptionHasBeenSet; }
    inline void SetCharacterSetDescription(const Aws::String& value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription = value; }
    inline void SetCharacterSetDescription(Aws::String&& value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription = std::move(value); }
    inline void SetCharacterSetDescription(const char* value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription.assign(value); }
    inline CharacterSet& WithCharacterSetDescription(const Aws::String& value) { SetCharacterSetDescription(value); return *this;}
    inline CharacterSet& WithCharacterSetDescription(Aws::String&& value) { SetCharacterSetDescription(std::move(value)); return *this;}
    inline CharacterSet& WithCharacterSetDescription(const char* value) { SetCharacterSetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_characterSetDescription;
    bool m_characterSetDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
