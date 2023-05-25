/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/OwnerOverride.h>
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
   * <p>A container for information about access control for replicas.</p> 
   * <p>This is not supported by Amazon S3 on Outposts buckets.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccessControlTranslation">AWS
   * API Reference</a></p>
   */
  class AccessControlTranslation
  {
  public:
    AWS_S3CONTROL_API AccessControlTranslation();
    AWS_S3CONTROL_API AccessControlTranslation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AccessControlTranslation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline const OwnerOverride& GetOwner() const{ return m_owner; }

    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline void SetOwner(const OwnerOverride& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline void SetOwner(OwnerOverride&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline AccessControlTranslation& WithOwner(const OwnerOverride& value) { SetOwner(value); return *this;}

    /**
     * <p>Specifies the replica ownership.</p>
     */
    inline AccessControlTranslation& WithOwner(OwnerOverride&& value) { SetOwner(std::move(value)); return *this;}

  private:

    OwnerOverride m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
