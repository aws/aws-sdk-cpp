/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/KeyRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/TargetOnDeviceService.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>S3Resource</code> object represents an Amazon S3 bucket that your
   * transferred data will be exported from or imported into. For export jobs, this
   * object can have an optional <code>KeyRange</code> value. The length of the range
   * is defined at job creation, and has either an inclusive
   * <code>BeginMarker</code>, an inclusive <code>EndMarker</code>, or both. Ranges
   * are UTF-8 binary sorted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/S3Resource">AWS
   * API Reference</a></p>
   */
  class S3Resource
  {
  public:
    AWS_SNOWBALL_API S3Resource() = default;
    AWS_SNOWBALL_API S3Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API S3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3Resource& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const KeyRange& GetKeyRange() const { return m_keyRange; }
    inline bool KeyRangeHasBeenSet() const { return m_keyRangeHasBeenSet; }
    template<typename KeyRangeT = KeyRange>
    void SetKeyRange(KeyRangeT&& value) { m_keyRangeHasBeenSet = true; m_keyRange = std::forward<KeyRangeT>(value); }
    template<typename KeyRangeT = KeyRange>
    S3Resource& WithKeyRange(KeyRangeT&& value) { SetKeyRange(std::forward<KeyRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline const Aws::Vector<TargetOnDeviceService>& GetTargetOnDeviceServices() const { return m_targetOnDeviceServices; }
    inline bool TargetOnDeviceServicesHasBeenSet() const { return m_targetOnDeviceServicesHasBeenSet; }
    template<typename TargetOnDeviceServicesT = Aws::Vector<TargetOnDeviceService>>
    void SetTargetOnDeviceServices(TargetOnDeviceServicesT&& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices = std::forward<TargetOnDeviceServicesT>(value); }
    template<typename TargetOnDeviceServicesT = Aws::Vector<TargetOnDeviceService>>
    S3Resource& WithTargetOnDeviceServices(TargetOnDeviceServicesT&& value) { SetTargetOnDeviceServices(std::forward<TargetOnDeviceServicesT>(value)); return *this;}
    template<typename TargetOnDeviceServicesT = TargetOnDeviceService>
    S3Resource& AddTargetOnDeviceServices(TargetOnDeviceServicesT&& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices.emplace_back(std::forward<TargetOnDeviceServicesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    KeyRange m_keyRange;
    bool m_keyRangeHasBeenSet = false;

    Aws::Vector<TargetOnDeviceService> m_targetOnDeviceServices;
    bool m_targetOnDeviceServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
