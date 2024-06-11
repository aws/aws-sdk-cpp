﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/NativeIndexConfiguration.h>
#include <aws/qbusiness/model/KendraIndexConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information on how the retriever used for your Amazon Q Business
   * application is configured.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/RetrieverConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrieverConfiguration
  {
  public:
    AWS_QBUSINESS_API RetrieverConfiguration();
    AWS_QBUSINESS_API RetrieverConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API RetrieverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information on how a Amazon Q Business index used as a retriever for
     * your Amazon Q Business application is configured.</p>
     */
    inline const NativeIndexConfiguration& GetNativeIndexConfiguration() const{ return m_nativeIndexConfiguration; }
    inline bool NativeIndexConfigurationHasBeenSet() const { return m_nativeIndexConfigurationHasBeenSet; }
    inline void SetNativeIndexConfiguration(const NativeIndexConfiguration& value) { m_nativeIndexConfigurationHasBeenSet = true; m_nativeIndexConfiguration = value; }
    inline void SetNativeIndexConfiguration(NativeIndexConfiguration&& value) { m_nativeIndexConfigurationHasBeenSet = true; m_nativeIndexConfiguration = std::move(value); }
    inline RetrieverConfiguration& WithNativeIndexConfiguration(const NativeIndexConfiguration& value) { SetNativeIndexConfiguration(value); return *this;}
    inline RetrieverConfiguration& WithNativeIndexConfiguration(NativeIndexConfiguration&& value) { SetNativeIndexConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on how the Amazon Kendra index used as a retriever for
     * your Amazon Q Business application is configured.</p>
     */
    inline const KendraIndexConfiguration& GetKendraIndexConfiguration() const{ return m_kendraIndexConfiguration; }
    inline bool KendraIndexConfigurationHasBeenSet() const { return m_kendraIndexConfigurationHasBeenSet; }
    inline void SetKendraIndexConfiguration(const KendraIndexConfiguration& value) { m_kendraIndexConfigurationHasBeenSet = true; m_kendraIndexConfiguration = value; }
    inline void SetKendraIndexConfiguration(KendraIndexConfiguration&& value) { m_kendraIndexConfigurationHasBeenSet = true; m_kendraIndexConfiguration = std::move(value); }
    inline RetrieverConfiguration& WithKendraIndexConfiguration(const KendraIndexConfiguration& value) { SetKendraIndexConfiguration(value); return *this;}
    inline RetrieverConfiguration& WithKendraIndexConfiguration(KendraIndexConfiguration&& value) { SetKendraIndexConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    NativeIndexConfiguration m_nativeIndexConfiguration;
    bool m_nativeIndexConfigurationHasBeenSet = false;

    KendraIndexConfiguration m_kendraIndexConfiguration;
    bool m_kendraIndexConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
