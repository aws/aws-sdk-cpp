/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/Checksum.h>
#include <aws/sagemaker-edge/model/ModelState.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/Definition">AWS
   * API Reference</a></p>
   */
  class Definition
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API Definition();
    AWS_SAGEMAKEREDGEMANAGER_API Definition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Definition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique model handle.</p>
     */
    inline const Aws::String& GetModelHandle() const{ return m_modelHandle; }

    /**
     * <p>The unique model handle.</p>
     */
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }

    /**
     * <p>The unique model handle.</p>
     */
    inline void SetModelHandle(const Aws::String& value) { m_modelHandleHasBeenSet = true; m_modelHandle = value; }

    /**
     * <p>The unique model handle.</p>
     */
    inline void SetModelHandle(Aws::String&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::move(value); }

    /**
     * <p>The unique model handle.</p>
     */
    inline void SetModelHandle(const char* value) { m_modelHandleHasBeenSet = true; m_modelHandle.assign(value); }

    /**
     * <p>The unique model handle.</p>
     */
    inline Definition& WithModelHandle(const Aws::String& value) { SetModelHandle(value); return *this;}

    /**
     * <p>The unique model handle.</p>
     */
    inline Definition& WithModelHandle(Aws::String&& value) { SetModelHandle(std::move(value)); return *this;}

    /**
     * <p>The unique model handle.</p>
     */
    inline Definition& WithModelHandle(const char* value) { SetModelHandle(value); return *this;}


    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline Definition& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline Definition& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline Definition& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    /**
     * <p>The checksum information of the model.</p>
     */
    inline const Checksum& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The checksum information of the model.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>The checksum information of the model.</p>
     */
    inline void SetChecksum(const Checksum& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>The checksum information of the model.</p>
     */
    inline void SetChecksum(Checksum&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>The checksum information of the model.</p>
     */
    inline Definition& WithChecksum(const Checksum& value) { SetChecksum(value); return *this;}

    /**
     * <p>The checksum information of the model.</p>
     */
    inline Definition& WithChecksum(Checksum&& value) { SetChecksum(std::move(value)); return *this;}


    /**
     * <p>The desired state of the model.</p>
     */
    inline const ModelState& GetState() const{ return m_state; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline void SetState(const ModelState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The desired state of the model.</p>
     */
    inline void SetState(ModelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The desired state of the model.</p>
     */
    inline Definition& WithState(const ModelState& value) { SetState(value); return *this;}

    /**
     * <p>The desired state of the model.</p>
     */
    inline Definition& WithState(ModelState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_modelHandle;
    bool m_modelHandleHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    Checksum m_checksum;
    bool m_checksumHasBeenSet = false;

    ModelState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
