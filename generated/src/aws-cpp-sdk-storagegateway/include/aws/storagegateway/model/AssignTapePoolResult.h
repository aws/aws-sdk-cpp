/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace StorageGateway
{
namespace Model
{
  class AssignTapePoolResult
  {
  public:
    AWS_STORAGEGATEWAY_API AssignTapePoolResult();
    AWS_STORAGEGATEWAY_API AssignTapePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API AssignTapePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARN = value; }

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline AssignTapePoolResult& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline AssignTapePoolResult& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Names (ARN) of the virtual tape that was added to
     * the tape pool.</p>
     */
    inline AssignTapePoolResult& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:

    Aws::String m_tapeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
