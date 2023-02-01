/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LogType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The log configuration for the channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/LogConfigurationForChannel">AWS
   * API Reference</a></p>
   */
  class LogConfigurationForChannel
  {
  public:
    AWS_MEDIATAILOR_API LogConfigurationForChannel();
    AWS_MEDIATAILOR_API LogConfigurationForChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API LogConfigurationForChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log types.</p>
     */
    inline const Aws::Vector<LogType>& GetLogTypes() const{ return m_logTypes; }

    /**
     * <p>The log types.</p>
     */
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }

    /**
     * <p>The log types.</p>
     */
    inline void SetLogTypes(const Aws::Vector<LogType>& value) { m_logTypesHasBeenSet = true; m_logTypes = value; }

    /**
     * <p>The log types.</p>
     */
    inline void SetLogTypes(Aws::Vector<LogType>&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::move(value); }

    /**
     * <p>The log types.</p>
     */
    inline LogConfigurationForChannel& WithLogTypes(const Aws::Vector<LogType>& value) { SetLogTypes(value); return *this;}

    /**
     * <p>The log types.</p>
     */
    inline LogConfigurationForChannel& WithLogTypes(Aws::Vector<LogType>&& value) { SetLogTypes(std::move(value)); return *this;}

    /**
     * <p>The log types.</p>
     */
    inline LogConfigurationForChannel& AddLogTypes(const LogType& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }

    /**
     * <p>The log types.</p>
     */
    inline LogConfigurationForChannel& AddLogTypes(LogType&& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogType> m_logTypes;
    bool m_logTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
