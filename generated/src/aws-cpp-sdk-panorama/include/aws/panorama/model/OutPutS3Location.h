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
   * <p>The location of an output object in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/OutPutS3Location">AWS
   * API Reference</a></p>
   */
  class OutPutS3Location
  {
  public:
    AWS_PANORAMA_API OutPutS3Location() = default;
    AWS_PANORAMA_API OutPutS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API OutPutS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object's bucket.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    OutPutS3Location& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object's key.</p>
     */
    inline const Aws::String& GetObjectKey() const { return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    template<typename ObjectKeyT = Aws::String>
    void SetObjectKey(ObjectKeyT&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::forward<ObjectKeyT>(value); }
    template<typename ObjectKeyT = Aws::String>
    OutPutS3Location& WithObjectKey(ObjectKeyT&& value) { SetObjectKey(std::forward<ObjectKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
