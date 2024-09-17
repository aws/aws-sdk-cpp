/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A container for information about the registered location.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessGrantsLocationsEntry">AWS
   * API Reference</a></p>
   */
  class ListAccessGrantsLocationsEntry
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsLocationsEntry();
    AWS_S3CONTROL_API ListAccessGrantsLocationsEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListAccessGrantsLocationsEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListAccessGrantsLocationsEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListAccessGrantsLocationsEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = value; }
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::move(value); }
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId.assign(value); }
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registered location. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationArn() const{ return m_accessGrantsLocationArn; }
    inline bool AccessGrantsLocationArnHasBeenSet() const { return m_accessGrantsLocationArnHasBeenSet; }
    inline void SetAccessGrantsLocationArn(const Aws::String& value) { m_accessGrantsLocationArnHasBeenSet = true; m_accessGrantsLocationArn = value; }
    inline void SetAccessGrantsLocationArn(Aws::String&& value) { m_accessGrantsLocationArnHasBeenSet = true; m_accessGrantsLocationArn = std::move(value); }
    inline void SetAccessGrantsLocationArn(const char* value) { m_accessGrantsLocationArnHasBeenSet = true; m_accessGrantsLocationArn.assign(value); }
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationArn(const Aws::String& value) { SetAccessGrantsLocationArn(value); return *this;}
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationArn(Aws::String&& value) { SetAccessGrantsLocationArn(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsEntry& WithAccessGrantsLocationArn(const char* value) { SetAccessGrantsLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline const Aws::String& GetLocationScope() const{ return m_locationScope; }
    inline bool LocationScopeHasBeenSet() const { return m_locationScopeHasBeenSet; }
    inline void SetLocationScope(const Aws::String& value) { m_locationScopeHasBeenSet = true; m_locationScope = value; }
    inline void SetLocationScope(Aws::String&& value) { m_locationScopeHasBeenSet = true; m_locationScope = std::move(value); }
    inline void SetLocationScope(const char* value) { m_locationScopeHasBeenSet = true; m_locationScope.assign(value); }
    inline ListAccessGrantsLocationsEntry& WithLocationScope(const Aws::String& value) { SetLocationScope(value); return *this;}
    inline ListAccessGrantsLocationsEntry& WithLocationScope(Aws::String&& value) { SetLocationScope(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsEntry& WithLocationScope(const char* value) { SetLocationScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline const Aws::String& GetIAMRoleArn() const{ return m_iAMRoleArn; }
    inline bool IAMRoleArnHasBeenSet() const { return m_iAMRoleArnHasBeenSet; }
    inline void SetIAMRoleArn(const Aws::String& value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn = value; }
    inline void SetIAMRoleArn(Aws::String&& value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn = std::move(value); }
    inline void SetIAMRoleArn(const char* value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn.assign(value); }
    inline ListAccessGrantsLocationsEntry& WithIAMRoleArn(const Aws::String& value) { SetIAMRoleArn(value); return *this;}
    inline ListAccessGrantsLocationsEntry& WithIAMRoleArn(Aws::String&& value) { SetIAMRoleArn(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsEntry& WithIAMRoleArn(const char* value) { SetIAMRoleArn(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationArn;
    bool m_accessGrantsLocationArnHasBeenSet = false;

    Aws::String m_locationScope;
    bool m_locationScopeHasBeenSet = false;

    Aws::String m_iAMRoleArn;
    bool m_iAMRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
