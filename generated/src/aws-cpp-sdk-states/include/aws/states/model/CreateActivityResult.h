/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{
  class CreateActivityResult
  {
  public:
    AWS_SFN_API CreateActivityResult();
    AWS_SFN_API CreateActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API CreateActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline void SetActivityArn(const Aws::String& value) { m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline void SetActivityArn(Aws::String&& value) { m_activityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline void SetActivityArn(const char* value) { m_activityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline CreateActivityResult& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline CreateActivityResult& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline CreateActivityResult& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}


    /**
     * <p>The date the activity is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the activity is created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the activity is created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the activity is created.</p>
     */
    inline CreateActivityResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the activity is created.</p>
     */
    inline CreateActivityResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_activityArn;

    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
