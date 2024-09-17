/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A custom type that specifies a <code>Region</code> and the
   * <code>KmsKeyId</code> for a replica secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicaRegionType">AWS
   * API Reference</a></p>
   */
  class ReplicaRegionType
  {
  public:
    AWS_SECRETSMANAGER_API ReplicaRegionType();
    AWS_SECRETSMANAGER_API ReplicaRegionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API ReplicaRegionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ReplicaRegionType& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ReplicaRegionType& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ReplicaRegionType& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ReplicaRegionType& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ReplicaRegionType& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ReplicaRegionType& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
