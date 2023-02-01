/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>A list of information about the configuration.</p> <p>Does not
   * apply to RabbitMQ brokers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConfigurationId">AWS
   * API Reference</a></p>
   */
  class ConfigurationId
  {
  public:
    AWS_MQ_API ConfigurationId();
    AWS_MQ_API ConfigurationId(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API ConfigurationId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ConfigurationId& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ConfigurationId& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ConfigurationId& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The revision number of the configuration.</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision number of the configuration.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision number of the configuration.</p>
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision number of the configuration.</p>
     */
    inline ConfigurationId& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
