﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/JavaScriptSourceMaps.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p> A structure that contains the configuration for how an app monitor can
   * deobfuscate stack traces. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/DeobfuscationConfiguration">AWS
   * API Reference</a></p>
   */
  class DeobfuscationConfiguration
  {
  public:
    AWS_CLOUDWATCHRUM_API DeobfuscationConfiguration();
    AWS_CLOUDWATCHRUM_API DeobfuscationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API DeobfuscationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A structure that contains the configuration for how an app monitor can
     * unminify JavaScript error stack traces using source maps. </p>
     */
    inline const JavaScriptSourceMaps& GetJavaScriptSourceMaps() const{ return m_javaScriptSourceMaps; }
    inline bool JavaScriptSourceMapsHasBeenSet() const { return m_javaScriptSourceMapsHasBeenSet; }
    inline void SetJavaScriptSourceMaps(const JavaScriptSourceMaps& value) { m_javaScriptSourceMapsHasBeenSet = true; m_javaScriptSourceMaps = value; }
    inline void SetJavaScriptSourceMaps(JavaScriptSourceMaps&& value) { m_javaScriptSourceMapsHasBeenSet = true; m_javaScriptSourceMaps = std::move(value); }
    inline DeobfuscationConfiguration& WithJavaScriptSourceMaps(const JavaScriptSourceMaps& value) { SetJavaScriptSourceMaps(value); return *this;}
    inline DeobfuscationConfiguration& WithJavaScriptSourceMaps(JavaScriptSourceMaps&& value) { SetJavaScriptSourceMaps(std::move(value)); return *this;}
    ///@}
  private:

    JavaScriptSourceMaps m_javaScriptSourceMaps;
    bool m_javaScriptSourceMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
