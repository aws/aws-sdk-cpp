/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * Configure ingress access logging.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/IngressAccessLogs">AWS
   * API Reference</a></p>
   */
  class IngressAccessLogs
  {
  public:
    AWS_MEDIAPACKAGE_API IngressAccessLogs();
    AWS_MEDIAPACKAGE_API IngressAccessLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API IngressAccessLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Customize the log group name.
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * Customize the log group name.
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * Customize the log group name.
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * Customize the log group name.
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * Customize the log group name.
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * Customize the log group name.
     */
    inline IngressAccessLogs& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * Customize the log group name.
     */
    inline IngressAccessLogs& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * Customize the log group name.
     */
    inline IngressAccessLogs& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
