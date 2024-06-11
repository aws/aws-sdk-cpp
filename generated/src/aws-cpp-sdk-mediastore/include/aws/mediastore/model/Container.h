﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediastore/model/ContainerStatus.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>This section describes operations that you can perform on an AWS Elemental
   * MediaStore container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_MEDIASTORE_API Container();
    AWS_MEDIASTORE_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Container& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Container& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Container& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unix timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Container& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Container& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline Container& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline Container& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline Container& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Container& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Container& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Container& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline const ContainerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContainerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContainerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Container& WithStatus(const ContainerStatus& value) { SetStatus(value); return *this;}
    inline Container& WithStatus(ContainerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of access logging on the container. This value is
     * <code>false</code> by default, indicating that AWS Elemental MediaStore does not
     * send access logs to Amazon CloudWatch Logs. When you enable access logging on
     * the container, MediaStore changes this value to <code>true</code>, indicating
     * that the service delivers access logs for objects stored in that container to
     * CloudWatch Logs.</p>
     */
    inline bool GetAccessLoggingEnabled() const{ return m_accessLoggingEnabled; }
    inline bool AccessLoggingEnabledHasBeenSet() const { return m_accessLoggingEnabledHasBeenSet; }
    inline void SetAccessLoggingEnabled(bool value) { m_accessLoggingEnabledHasBeenSet = true; m_accessLoggingEnabled = value; }
    inline Container& WithAccessLoggingEnabled(bool value) { SetAccessLoggingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_accessLoggingEnabled;
    bool m_accessLoggingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
