/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/S3BucketSource.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   * <p>Start import request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartImportRequest">AWS
   * API Reference</a></p>
   */
  class StartImportRequest : public MgnRequest
  {
  public:
    AWS_MGN_API StartImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImport"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Start import request client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Start import request client token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Start import request client token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Start import request client token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Start import request client token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Start import request client token.</p>
     */
    inline StartImportRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Start import request client token.</p>
     */
    inline StartImportRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Start import request client token.</p>
     */
    inline StartImportRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }

    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }

    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }

    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }

    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline StartImportRequest& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}

    /**
     * <p>Start import request s3 bucket source.</p>
     */
    inline StartImportRequest& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
