/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>A cluster whose updates have failed</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UnprocessedCluster">AWS
   * API Reference</a></p>
   */
  class UnprocessedCluster
  {
  public:
    AWS_MEMORYDB_API UnprocessedCluster();
    AWS_MEMORYDB_API UnprocessedCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API UnprocessedCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the cluster</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster</p>
     */
    inline UnprocessedCluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster</p>
     */
    inline UnprocessedCluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster</p>
     */
    inline UnprocessedCluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The error type associated with the update failure</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}

    /**
     * <p>The error type associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorType(const char* value) { SetErrorType(value); return *this;}


    /**
     * <p>The error message associated with the update failure</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message associated with the update failure</p>
     */
    inline UnprocessedCluster& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
