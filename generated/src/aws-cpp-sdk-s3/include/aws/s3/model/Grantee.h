/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/Type.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Container for the person being granted permissions.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Grantee">AWS API
   * Reference</a></p>
   */
  class Grantee
  {
  public:
    AWS_S3_API Grantee() = default;
    AWS_S3_API Grantee(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Grantee& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Screen name of the grantee.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Grantee& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email address of the grantee.</p>  <p>Using email addresses to specify
     * a grantee is only supported in the following Amazon Web Services Regions: </p>
     * <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US West (N. California)</p>
     * </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia Pacific (Singapore)</p>
     * </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li> <p>Asia Pacific (Tokyo)</p>
     * </li> <li> <p>Europe (Ireland)</p> </li> <li> <p>South America (São Paulo)</p>
     * </li> </ul> <p>For a list of all the Amazon S3 supported Regions and endpoints,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    Grantee& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical user ID of the grantee.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    Grantee& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of grantee</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline Grantee& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of the grantee group.</p>
     */
    inline const Aws::String& GetURI() const { return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    template<typename URIT = Aws::String>
    void SetURI(URIT&& value) { m_uRIHasBeenSet = true; m_uRI = std::forward<URIT>(value); }
    template<typename URIT = Aws::String>
    Grantee& WithURI(URIT&& value) { SetURI(std::forward<URIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
