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
    AWS_PANORAMA_API StorageLocation() = default;
    AWS_PANORAMA_API StorageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API StorageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location's binary prefix.</p>
     */
    inline const Aws::String& GetBinaryPrefixLocation() const { return m_binaryPrefixLocation; }
    inline bool BinaryPrefixLocationHasBeenSet() const { return m_binaryPrefixLocationHasBeenSet; }
    template<typename BinaryPrefixLocationT = Aws::String>
    void SetBinaryPrefixLocation(BinaryPrefixLocationT&& value) { m_binaryPrefixLocationHasBeenSet = true; m_binaryPrefixLocation = std::forward<BinaryPrefixLocationT>(value); }
    template<typename BinaryPrefixLocationT = Aws::String>
    StorageLocation& WithBinaryPrefixLocation(BinaryPrefixLocationT&& value) { SetBinaryPrefixLocation(std::forward<BinaryPrefixLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    StorageLocation& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's generated prefix.</p>
     */
    inline const Aws::String& GetGeneratedPrefixLocation() const { return m_generatedPrefixLocation; }
    inline bool GeneratedPrefixLocationHasBeenSet() const { return m_generatedPrefixLocationHasBeenSet; }
    template<typename GeneratedPrefixLocationT = Aws::String>
    void SetGeneratedPrefixLocation(GeneratedPrefixLocationT&& value) { m_generatedPrefixLocationHasBeenSet = true; m_generatedPrefixLocation = std::forward<GeneratedPrefixLocationT>(value); }
    template<typename GeneratedPrefixLocationT = Aws::String>
    StorageLocation& WithGeneratedPrefixLocation(GeneratedPrefixLocationT&& value) { SetGeneratedPrefixLocation(std::forward<GeneratedPrefixLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's manifest prefix.</p>
     */
    inline const Aws::String& GetManifestPrefixLocation() const { return m_manifestPrefixLocation; }
    inline bool ManifestPrefixLocationHasBeenSet() const { return m_manifestPrefixLocationHasBeenSet; }
    template<typename ManifestPrefixLocationT = Aws::String>
    void SetManifestPrefixLocation(ManifestPrefixLocationT&& value) { m_manifestPrefixLocationHasBeenSet = true; m_manifestPrefixLocation = std::forward<ManifestPrefixLocationT>(value); }
    template<typename ManifestPrefixLocationT = Aws::String>
    StorageLocation& WithManifestPrefixLocation(ManifestPrefixLocationT&& value) { SetManifestPrefixLocation(std::forward<ManifestPrefixLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location's repo prefix.</p>
     */
    inline const Aws::String& GetRepoPrefixLocation() const { return m_repoPrefixLocation; }
    inline bool RepoPrefixLocationHasBeenSet() const { return m_repoPrefixLocationHasBeenSet; }
    template<typename RepoPrefixLocationT = Aws::String>
    void SetRepoPrefixLocation(RepoPrefixLocationT&& value) { m_repoPrefixLocationHasBeenSet = true; m_repoPrefixLocation = std::forward<RepoPrefixLocationT>(value); }
    template<typename RepoPrefixLocationT = Aws::String>
    StorageLocation& WithRepoPrefixLocation(RepoPrefixLocationT&& value) { SetRepoPrefixLocation(std::forward<RepoPrefixLocationT>(value)); return *this;}
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
