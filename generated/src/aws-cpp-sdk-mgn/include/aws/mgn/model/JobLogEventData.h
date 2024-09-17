/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Job log data</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/JobLogEventData">AWS
   * API Reference</a></p>
   */
  class JobLogEventData
  {
  public:
    AWS_MGN_API JobLogEventData();
    AWS_MGN_API JobLogEventData(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API JobLogEventData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline const Aws::String& GetConversionServerID() const{ return m_conversionServerID; }
    inline bool ConversionServerIDHasBeenSet() const { return m_conversionServerIDHasBeenSet; }
    inline void SetConversionServerID(const Aws::String& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = value; }
    inline void SetConversionServerID(Aws::String&& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = std::move(value); }
    inline void SetConversionServerID(const char* value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID.assign(value); }
    inline JobLogEventData& WithConversionServerID(const Aws::String& value) { SetConversionServerID(value); return *this;}
    inline JobLogEventData& WithConversionServerID(Aws::String&& value) { SetConversionServerID(std::move(value)); return *this;}
    inline JobLogEventData& WithConversionServerID(const char* value) { SetConversionServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job error.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }
    inline JobLogEventData& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}
    inline JobLogEventData& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}
    inline JobLogEventData& WithRawError(const char* value) { SetRawError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline JobLogEventData& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline JobLogEventData& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline JobLogEventData& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline const Aws::String& GetTargetInstanceID() const{ return m_targetInstanceID; }
    inline bool TargetInstanceIDHasBeenSet() const { return m_targetInstanceIDHasBeenSet; }
    inline void SetTargetInstanceID(const Aws::String& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = value; }
    inline void SetTargetInstanceID(Aws::String&& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = std::move(value); }
    inline void SetTargetInstanceID(const char* value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID.assign(value); }
    inline JobLogEventData& WithTargetInstanceID(const Aws::String& value) { SetTargetInstanceID(value); return *this;}
    inline JobLogEventData& WithTargetInstanceID(Aws::String&& value) { SetTargetInstanceID(std::move(value)); return *this;}
    inline JobLogEventData& WithTargetInstanceID(const char* value) { SetTargetInstanceID(value); return *this;}
    ///@}
  private:

    Aws::String m_conversionServerID;
    bool m_conversionServerIDHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_targetInstanceID;
    bool m_targetInstanceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
