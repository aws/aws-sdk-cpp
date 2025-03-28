﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/PutObjectRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;



Aws::Http::HeaderValueCollection PutObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_cacheControlHasBeenSet)
  {
    ss << m_cacheControl;
    headers.emplace("cache-control",  ss.str());
    ss.str("");
  }

  if(m_storageClassHasBeenSet && m_storageClass != StorageClass::NOT_SET)
  {
    headers.emplace("x-amz-storage-class", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_uploadAvailabilityHasBeenSet && m_uploadAvailability != UploadAvailability::NOT_SET)
  {
    headers.emplace("x-amz-upload-availability", UploadAvailabilityMapper::GetNameForUploadAvailability(m_uploadAvailability));
  }

  return headers;

}
