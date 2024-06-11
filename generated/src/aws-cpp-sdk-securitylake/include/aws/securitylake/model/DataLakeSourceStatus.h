/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/SourceCollectionStatus.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Retrieves the Logs status for the Amazon Security Lake account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeSourceStatus">AWS
   * API Reference</a></p>
   */
  class DataLakeSourceStatus
  {
  public:
    AWS_SECURITYLAKE_API DataLakeSourceStatus();
    AWS_SECURITYLAKE_API DataLakeSourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeSourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline DataLakeSourceStatus& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline DataLakeSourceStatus& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline DataLakeSourceStatus& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of services, including error codes and patterns.</p>
     */
    inline const SourceCollectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SourceCollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SourceCollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataLakeSourceStatus& WithStatus(const SourceCollectionStatus& value) { SetStatus(value); return *this;}
    inline DataLakeSourceStatus& WithStatus(SourceCollectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    SourceCollectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
