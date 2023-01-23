/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamingSessionBackup.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListStreamingSessionBackupsResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStreamingSessionBackupsResult();
    AWS_NIMBLESTUDIO_API ListStreamingSessionBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStreamingSessionBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionBackupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionBackupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionBackupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline const Aws::Vector<StreamingSessionBackup>& GetStreamingSessionBackups() const{ return m_streamingSessionBackups; }

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline void SetStreamingSessionBackups(const Aws::Vector<StreamingSessionBackup>& value) { m_streamingSessionBackups = value; }

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline void SetStreamingSessionBackups(Aws::Vector<StreamingSessionBackup>&& value) { m_streamingSessionBackups = std::move(value); }

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline ListStreamingSessionBackupsResult& WithStreamingSessionBackups(const Aws::Vector<StreamingSessionBackup>& value) { SetStreamingSessionBackups(value); return *this;}

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline ListStreamingSessionBackupsResult& WithStreamingSessionBackups(Aws::Vector<StreamingSessionBackup>&& value) { SetStreamingSessionBackups(std::move(value)); return *this;}

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline ListStreamingSessionBackupsResult& AddStreamingSessionBackups(const StreamingSessionBackup& value) { m_streamingSessionBackups.push_back(value); return *this; }

    /**
     * <p>Information about the streaming session backups.</p>
     */
    inline ListStreamingSessionBackupsResult& AddStreamingSessionBackups(StreamingSessionBackup&& value) { m_streamingSessionBackups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StreamingSessionBackup> m_streamingSessionBackups;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
