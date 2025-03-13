/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about an S3 object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_ROBOMAKER_API S3Object() = default;
    AWS_ROBOMAKER_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bucket containing the object.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Object& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3Object& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The etag of the object.</p>
     */
    inline const Aws::String& GetEtag() const { return m_etag; }
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }
    template<typename EtagT = Aws::String>
    void SetEtag(EtagT&& value) { m_etagHasBeenSet = true; m_etag = std::forward<EtagT>(value); }
    template<typename EtagT = Aws::String>
    S3Object& WithEtag(EtagT&& value) { SetEtag(std::forward<EtagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
