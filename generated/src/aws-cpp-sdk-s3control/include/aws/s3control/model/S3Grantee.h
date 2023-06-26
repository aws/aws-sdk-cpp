/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3GranteeTypeIdentifier.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Grantee">AWS
   * API Reference</a></p>
   */
  class S3Grantee
  {
  public:
    AWS_S3CONTROL_API S3Grantee();
    AWS_S3CONTROL_API S3Grantee(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3Grantee& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3GranteeTypeIdentifier& GetTypeIdentifier() const{ return m_typeIdentifier; }

    /**
     * <p/>
     */
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTypeIdentifier(const S3GranteeTypeIdentifier& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetTypeIdentifier(S3GranteeTypeIdentifier&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline S3Grantee& WithTypeIdentifier(const S3GranteeTypeIdentifier& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grantee& WithTypeIdentifier(S3GranteeTypeIdentifier&& value) { SetTypeIdentifier(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p/>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p/>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p/>
     */
    inline S3Grantee& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grantee& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3Grantee& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p/>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p/>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p/>
     */
    inline S3Grantee& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grantee& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3Grantee& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    S3GranteeTypeIdentifier m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
