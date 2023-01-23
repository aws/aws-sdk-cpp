/**
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


    /**
     * <p>The location's binary prefix.</p>
     */
    inline const Aws::String& GetBinaryPrefixLocation() const{ return m_binaryPrefixLocation; }

    /**
     * <p>The location's binary prefix.</p>
     */
    inline bool BinaryPrefixLocationHasBeenSet() const { return m_binaryPrefixLocationHasBeenSet; }

    /**
     * <p>The location's binary prefix.</p>
     */
    inline void SetBinaryPrefixLocation(const Aws::String& value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation = value; }

    /**
     * <p>The location's binary prefix.</p>
     */
    inline void SetBinaryPrefixLocation(Aws::String&& value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation = std::move(value); }

    /**
     * <p>The location's binary prefix.</p>
     */
    inline void SetBinaryPrefixLocation(const char* value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation.assign(value); }

    /**
     * <p>The location's binary prefix.</p>
     */
    inline StorageLocation& WithBinaryPrefixLocation(const Aws::String& value) { SetBinaryPrefixLocation(value); return *this;}

    /**
     * <p>The location's binary prefix.</p>
     */
    inline StorageLocation& WithBinaryPrefixLocation(Aws::String&& value) { SetBinaryPrefixLocation(std::move(value)); return *this;}

    /**
     * <p>The location's binary prefix.</p>
     */
    inline StorageLocation& WithBinaryPrefixLocation(const char* value) { SetBinaryPrefixLocation(value); return *this;}


    /**
     * <p>The location's bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The location's bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The location's bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The location's bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The location's bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The location's bucket.</p>
     */
    inline StorageLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The location's bucket.</p>
     */
    inline StorageLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The location's bucket.</p>
     */
    inline StorageLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The location's generated prefix.</p>
     */
    inline const Aws::String& GetGeneratedPrefixLocation() const{ return m_generatedPrefixLocation; }

    /**
     * <p>The location's generated prefix.</p>
     */
    inline bool GeneratedPrefixLocationHasBeenSet() const { return m_generatedPrefixLocationHasBeenSet; }

    /**
     * <p>The location's generated prefix.</p>
     */
    inline void SetGeneratedPrefixLocation(const Aws::String& value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation = value; }

    /**
     * <p>The location's generated prefix.</p>
     */
    inline void SetGeneratedPrefixLocation(Aws::String&& value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation = std::move(value); }

    /**
     * <p>The location's generated prefix.</p>
     */
    inline void SetGeneratedPrefixLocation(const char* value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation.assign(value); }

    /**
     * <p>The location's generated prefix.</p>
     */
    inline StorageLocation& WithGeneratedPrefixLocation(const Aws::String& value) { SetGeneratedPrefixLocation(value); return *this;}

    /**
     * <p>The location's generated prefix.</p>
     */
    inline StorageLocation& WithGeneratedPrefixLocation(Aws::String&& value) { SetGeneratedPrefixLocation(std::move(value)); return *this;}

    /**
     * <p>The location's generated prefix.</p>
     */
    inline StorageLocation& WithGeneratedPrefixLocation(const char* value) { SetGeneratedPrefixLocation(value); return *this;}


    /**
     * <p>The location's manifest prefix.</p>
     */
    inline const Aws::String& GetManifestPrefixLocation() const{ return m_manifestPrefixLocation; }

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline bool ManifestPrefixLocationHasBeenSet() const { return m_manifestPrefixLocationHasBeenSet; }

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline void SetManifestPrefixLocation(const Aws::String& value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation = value; }

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline void SetManifestPrefixLocation(Aws::String&& value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation = std::move(value); }

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline void SetManifestPrefixLocation(const char* value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation.assign(value); }

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline StorageLocation& WithManifestPrefixLocation(const Aws::String& value) { SetManifestPrefixLocation(value); return *this;}

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline StorageLocation& WithManifestPrefixLocation(Aws::String&& value) { SetManifestPrefixLocation(std::move(value)); return *this;}

    /**
     * <p>The location's manifest prefix.</p>
     */
    inline StorageLocation& WithManifestPrefixLocation(const char* value) { SetManifestPrefixLocation(value); return *this;}


    /**
     * <p>The location's repo prefix.</p>
     */
    inline const Aws::String& GetRepoPrefixLocation() const{ return m_repoPrefixLocation; }

    /**
     * <p>The location's repo prefix.</p>
     */
    inline bool RepoPrefixLocationHasBeenSet() const { return m_repoPrefixLocationHasBeenSet; }

    /**
     * <p>The location's repo prefix.</p>
     */
    inline void SetRepoPrefixLocation(const Aws::String& value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation = value; }

    /**
     * <p>The location's repo prefix.</p>
     */
    inline void SetRepoPrefixLocation(Aws::String&& value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation = std::move(value); }

    /**
     * <p>The location's repo prefix.</p>
     */
    inline void SetRepoPrefixLocation(const char* value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation.assign(value); }

    /**
     * <p>The location's repo prefix.</p>
     */
    inline StorageLocation& WithRepoPrefixLocation(const Aws::String& value) { SetRepoPrefixLocation(value); return *this;}

    /**
     * <p>The location's repo prefix.</p>
     */
    inline StorageLocation& WithRepoPrefixLocation(Aws::String&& value) { SetRepoPrefixLocation(std::move(value)); return *this;}

    /**
     * <p>The location's repo prefix.</p>
     */
    inline StorageLocation& WithRepoPrefixLocation(const char* value) { SetRepoPrefixLocation(value); return *this;}

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
