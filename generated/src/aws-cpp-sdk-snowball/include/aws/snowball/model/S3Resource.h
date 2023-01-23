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
    AWS_SNOWBALL_API S3Resource();
    AWS_SNOWBALL_API S3Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API S3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const KeyRange& GetKeyRange() const{ return m_keyRange; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline bool KeyRangeHasBeenSet() const { return m_keyRangeHasBeenSet; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetKeyRange(const KeyRange& value) { m_keyRangeHasBeenSet = true; m_keyRange = value; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetKeyRange(KeyRange&& value) { m_keyRangeHasBeenSet = true; m_keyRange = std::move(value); }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline S3Resource& WithKeyRange(const KeyRange& value) { SetKeyRange(value); return *this;}

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline S3Resource& WithKeyRange(KeyRange&& value) { SetKeyRange(std::move(value)); return *this;}


    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline const Aws::Vector<TargetOnDeviceService>& GetTargetOnDeviceServices() const{ return m_targetOnDeviceServices; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline bool TargetOnDeviceServicesHasBeenSet() const { return m_targetOnDeviceServicesHasBeenSet; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline void SetTargetOnDeviceServices(const Aws::Vector<TargetOnDeviceService>& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices = value; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline void SetTargetOnDeviceServices(Aws::Vector<TargetOnDeviceService>&& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices = std::move(value); }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline S3Resource& WithTargetOnDeviceServices(const Aws::Vector<TargetOnDeviceService>& value) { SetTargetOnDeviceServices(value); return *this;}

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline S3Resource& WithTargetOnDeviceServices(Aws::Vector<TargetOnDeviceService>&& value) { SetTargetOnDeviceServices(std::move(value)); return *this;}

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline S3Resource& AddTargetOnDeviceServices(const TargetOnDeviceService& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices.push_back(value); return *this; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System).</p>
     */
    inline S3Resource& AddTargetOnDeviceServices(TargetOnDeviceService&& value) { m_targetOnDeviceServicesHasBeenSet = true; m_targetOnDeviceServices.push_back(std::move(value)); return *this; }

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
