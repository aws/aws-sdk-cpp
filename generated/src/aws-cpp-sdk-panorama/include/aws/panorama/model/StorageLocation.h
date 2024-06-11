﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A storage location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/StorageLocation">AWS
   * API Reference</a></p>
   */
  class StorageLocation
  {
  public:
    AWS_PANORAMA_API StorageLocation();
    AWS_PANORAMA_API StorageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API StorageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location's binary prefix.</p>
     */
    inline const Aws::String& GetBinaryPrefixLocation() const{ return m_binaryPrefixLocation; }
    inline bool BinaryPrefixLocationHasBeenSet() const { return m_binaryPrefixLocationHasBeenSet; }
    inline void SetBinaryPrefixLocation(const Aws::String& value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation = value; }
    inline void SetBinaryPrefixLocation(Aws::String&& value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation = std::move(value); }
    inline void SetBinaryPrefixLocation(const char* value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation.assign(value); }
    inline StorageLocation& WithBinaryPrefixLocation(const Aws::String& value) { SetBinaryPrefixLocation(value); return *this;}
    inline StorageLocation& WithBinaryPrefixLocation(Aws::String&& value) { SetBinaryPrefixLocation(std::move(value)); return *this;}
    inline StorageLocation& WithBinaryPrefixLocation(const char* value) { SetBinaryPrefixLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline StorageLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline StorageLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline StorageLocation& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's generated prefix.</p>
     */
    inline const Aws::String& GetGeneratedPrefixLocation() const{ return m_generatedPrefixLocation; }
    inline bool GeneratedPrefixLocationHasBeenSet() const { return m_generatedPrefixLocationHasBeenSet; }
    inline void SetGeneratedPrefixLocation(const Aws::String& value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation = value; }
    inline void SetGeneratedPrefixLocation(Aws::String&& value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation = std::move(value); }
    inline void SetGeneratedPrefixLocation(const char* value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation.assign(value); }
    inline StorageLocation& WithGeneratedPrefixLocation(const Aws::String& value) { SetGeneratedPrefixLocation(value); return *this;}
    inline StorageLocation& WithGeneratedPrefixLocation(Aws::String&& value) { SetGeneratedPrefixLocation(std::move(value)); return *this;}
    inline StorageLocation& WithGeneratedPrefixLocation(const char* value) { SetGeneratedPrefixLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's manifest prefix.</p>
     */
    inline const Aws::String& GetManifestPrefixLocation() const{ return m_manifestPrefixLocation; }
    inline bool ManifestPrefixLocationHasBeenSet() const { return m_manifestPrefixLocationHasBeenSet; }
    inline void SetManifestPrefixLocation(const Aws::String& value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation = value; }
    inline void SetManifestPrefixLocation(Aws::String&& value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation = std::move(value); }
    inline void SetManifestPrefixLocation(const char* value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation.assign(value); }
    inline StorageLocation& WithManifestPrefixLocation(const Aws::String& value) { SetManifestPrefixLocation(value); return *this;}
    inline StorageLocation& WithManifestPrefixLocation(Aws::String&& value) { SetManifestPrefixLocation(std::move(value)); return *this;}
    inline StorageLocation& WithManifestPrefixLocation(const char* value) { SetManifestPrefixLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's repo prefix.</p>
     */
    inline const Aws::String& GetRepoPrefixLocation() const{ return m_repoPrefixLocation; }
    inline bool RepoPrefixLocationHasBeenSet() const { return m_repoPrefixLocationHasBeenSet; }
    inline void SetRepoPrefixLocation(const Aws::String& value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation = value; }
    inline void SetRepoPrefixLocation(Aws::String&& value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation = std::move(value); }
    inline void SetRepoPrefixLocation(const char* value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation.assign(value); }
    inline StorageLocation& WithRepoPrefixLocation(const Aws::String& value) { SetRepoPrefixLocation(value); return *this;}
    inline StorageLocation& WithRepoPrefixLocation(Aws::String&& value) { SetRepoPrefixLocation(std::move(value)); return *this;}
    inline StorageLocation& WithRepoPrefixLocation(const char* value) { SetRepoPrefixLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_binaryPrefixLocation;
    bool m_binaryPrefixLocationHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_generatedPrefixLocation;
    bool m_generatedPrefixLocationHasBeenSet = false;

    Aws::String m_manifestPrefixLocation;
    bool m_manifestPrefixLocationHasBeenSet = false;

    Aws::String m_repoPrefixLocation;
    bool m_repoPrefixLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
