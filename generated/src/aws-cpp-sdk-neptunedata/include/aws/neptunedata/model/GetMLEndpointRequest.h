﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class GetMLEndpointRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API GetMLEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMLEndpoint"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetMLEndpointRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetMLEndpointRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetMLEndpointRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline const Aws::String& GetNeptuneIamRoleArn() const{ return m_neptuneIamRoleArn; }
    inline bool NeptuneIamRoleArnHasBeenSet() const { return m_neptuneIamRoleArnHasBeenSet; }
    inline void SetNeptuneIamRoleArn(const Aws::String& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = value; }
    inline void SetNeptuneIamRoleArn(Aws::String&& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = std::move(value); }
    inline void SetNeptuneIamRoleArn(const char* value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn.assign(value); }
    inline GetMLEndpointRequest& WithNeptuneIamRoleArn(const Aws::String& value) { SetNeptuneIamRoleArn(value); return *this;}
    inline GetMLEndpointRequest& WithNeptuneIamRoleArn(Aws::String&& value) { SetNeptuneIamRoleArn(std::move(value)); return *this;}
    inline GetMLEndpointRequest& WithNeptuneIamRoleArn(const char* value) { SetNeptuneIamRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_neptuneIamRoleArn;
    bool m_neptuneIamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
