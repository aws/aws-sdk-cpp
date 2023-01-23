/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Job.h>
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
namespace MediaConvert
{
namespace Model
{
  class GetJobResult
  {
  public:
    AWS_MEDIACONVERT_API GetJobResult();
    AWS_MEDIACONVERT_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
