/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class UpdateParallelDataRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API UpdateParallelDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParallelData"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline UpdateParallelDataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline UpdateParallelDataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline UpdateParallelDataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline const ParallelDataConfig& GetParallelDataConfig() const{ return m_parallelDataConfig; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline bool ParallelDataConfigHasBeenSet() const { return m_parallelDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(const ParallelDataConfig& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = value; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(ParallelDataConfig&& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline UpdateParallelDataRequest& WithParallelDataConfig(const ParallelDataConfig& value) { SetParallelDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline UpdateParallelDataRequest& WithParallelDataConfig(ParallelDataConfig&& value) { SetParallelDataConfig(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline UpdateParallelDataRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline UpdateParallelDataRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline UpdateParallelDataRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParallelDataConfig m_parallelDataConfig;
    bool m_parallelDataConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
